#include <QCoreApplication>
#include <QDebug>

#include <globalValue.h>
#include <camera3d.h>
#include <camera2d_abc.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> availableCameras;

#ifdef BRAND_A
    CameraA cameraA;
    availableCameras = cameraA.discoverCamera();
#endif
#ifdef BRAND_B
    CameraB cameraB;
    availableCameras = cameraB.listCameras();
#endif

    // 列出所有可用相机
    qDebug() << "total camera num:" << availableCameras.size();
    for (int i = 0; i < availableCameras.size(); ++i) {
        qDebug() << availableCameras[i];
    }

    // 创建 3D 相机对象
    Camera3d camera3d(availableCameras);
    // 连接 3D 相机
    camera3d.connect();
    // 配置 3D 相机
    camera3d.configure(10, true);
    // 捕获图像
    camera3d.captureImages();
    // 断开连接 3D 相机
    camera3d.disconnect();

    qDebug() << "test finish";
    return a.exec();
}
