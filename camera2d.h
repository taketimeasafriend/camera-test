#ifndef CAMERA2D_H
#define CAMERA2D_H

#include <QObject>
#include <globalValue.h>

// 2D 相机基类
class Camera2d : public QObject
{
    Q_OBJECT
public:
    explicit Camera2d(QObject *parent = nullptr);

public:
    virtual QVector<int> discoverCamera() = 0;
    virtual CameraError open(int id) = 0;
    virtual CameraError close() = 0;
    virtual CameraError setConfig(int exposureTime, bool triggerMode) = 0;
    virtual CameraError getConfig(int& exposureTime, bool& triggerMode) = 0;
    virtual CameraError capture() = 0;

signals:
    void cameraErrorOccurred(CameraError error);

};

#endif // CAMERA2D_H
