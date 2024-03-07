#ifndef CAMERA2D_ABC_H
#define CAMERA2D_ABC_H

#include <globalValue.h>
#include <camera2d.h>

// 品牌 A 相机类
#ifdef BRAND_A
class CameraA : public Camera2d {
    Q_OBJECT
public:
    explicit CameraA(QObject *parent = nullptr);

public:
    QVector<int> discoverCamera() override;
    CameraError open(int id) override;
    CameraError close() override;
    CameraError setConfig(int exposureTime, bool triggerMode) override;
    CameraError getConfig(int& exposureTime, bool& triggerMode) override;
    CameraError capture() override;
};
#endif

// 品牌 B 相机类
#ifdef BRAND_B
class CameraB : public Camera2d {
    Q_OBJECT
public:

};
#endif

#endif // CAMERA2D_ABC_H
