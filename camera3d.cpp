#include "camera3d.h"

Camera3d::Camera3d(QObject *parent)
    : QObject{parent}
{

}

Camera3d::Camera3d(QVector<int> ids) {
    if (ids.size() < 2) {
        //
    }
    // 根据传入的相机 ID 创建相应品牌的相机对象并存储在 cameras 中
    QVector<int> selectCameras;
    selectCameras.clear();
    selectCameras.append(ids[0]);
    selectCameras.append(ids[1]);
    //
}
CameraError Camera3d::connect() {
    // 连接所有相机
    return CameraError::NO_ERROR;
}

CameraError Camera3d::disconnect() {
    // 断开所有相机
    return CameraError::NO_ERROR;
}

CameraError Camera3d::captureImages() {
    // 每个相机抓取图像
    return CameraError::NO_ERROR;
}

CameraError Camera3d::configure(int exposureTime, bool triggerMode) {
    // 配置所有相机的参数
    return CameraError::NO_ERROR;
}
