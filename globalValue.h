#ifndef GLOBALVALUE_H
#define GLOBALVALUE_H

// 定义宏，用于选择相机品牌
#define BRAND_A
// #define BRAND_B

// 假设相机的错误码
enum class CameraError {
    NO_ERROR,
    CONNECT_ERROR,
    DISCONNECT_ERROR,
    CAPTURE_ERROR,
    CONFIG_ERROR
};

#endif // GLOBALVALUE_H
