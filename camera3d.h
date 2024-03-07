#ifndef CAMERA3D_H
#define CAMERA3D_H

#include <QObject>
#include <globalValue.h>
#include <camera2d.h>

// 3D 相机类
class Camera3d : public QObject
{
    Q_OBJECT
public:
    explicit Camera3d(QObject *parent = nullptr);

private:
    QVector<Camera2d*> cameras;

public:
    Camera3d(QVector<int> ids);
    CameraError connect();
    CameraError disconnect();
    CameraError captureImages();
    CameraError configure(int exposureTime, bool triggerMode);

signals:

};

#endif // CAMERA3D_H
