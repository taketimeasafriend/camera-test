#include "camera2d_abc.h"

#ifdef BRAND_A

CameraA::CameraA(QObject *parent) {

}

QVector<int> CameraA::discoverCamera() {
    // 实现相机 A 的枚举相机功能
    QVector<int> vecCameraAddr;
    vecCameraAddr.append(1000);
    vecCameraAddr.append(2000);
    vecCameraAddr.append(3000);
    return vecCameraAddr;
}

CameraError CameraA::open(int id) {
    // 实现相机 A 的连接功能
    return CameraError::NO_ERROR;
}

CameraError CameraA::close() {
    // 实现相机 A 的断开连接功能
    return CameraError::NO_ERROR;
}

CameraError CameraA::setConfig(int exposureTime, bool triggerMode) {
    // 实现相机 A 的设置参数功能
    return CameraError::NO_ERROR;
}

CameraError CameraA::getConfig(int& exposureTime, bool& triggerMode) {
    // 实现相机 A 的获取参数功能
    return CameraError::NO_ERROR;
}

CameraError CameraA::capture() {
    // 实现相机 A 的抓取图像功能
    return CameraError::NO_ERROR;
}

#endif
