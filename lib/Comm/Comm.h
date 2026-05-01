#pragma once

#include <Arduino.h>
#include "esp_camera.h"

namespace Comm {
    // BLE 초기화
    void begin();

    // 카메라로 찍은 JPEG 프레임을 저장하고 전송 준비
    void setFrame(camera_fb_t* fb);

    // loop()에서 계속 호출하면서 BLE로 이미지 chunk 전송
    void handleClient();

    // BLE 연결 여부 확인
    bool isConnected();
}
