#include "tree_esp32.h"

#include <stdio.h>
#include "esp_log.h"

void TreeESP32::log(const TimberLogLevel logLevel, const char* message) {
  switch (logLevel) {
    case TimberLogLevel::ERROR:
      ESP_LOGE(m_tag.c_str(), "%s", message);
      break;

    case TimberLogLevel::WARNING:
      ESP_LOGW(m_tag.c_str(), "%s", message);
      break;

    case TimberLogLevel::INFO:
      ESP_LOGI(m_tag.c_str(), "%s", message);
      break;

    case TimberLogLevel::DEBUG:
      ESP_LOGD(m_tag.c_str(), "%s", message);
      break;

    case TimberLogLevel::VERBOSE:
      ESP_LOGV(m_tag.c_str(), "%s", message);
      break;

    default:
      break;
  }
};
