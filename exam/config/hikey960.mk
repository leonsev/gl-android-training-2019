##

PRODUCT_PACKAGES += \
    vendor.gl.ledcontrol@1.0-service.hikey960 \
    vendor.gl.ledcontrol@1.0-java \
    LedControlApp
    

TARGET_FS_CONFIG_GEN += \
    vendor/gl/config/config.fs

BOARD_SEPOLICY_DIRS := \
    vendor/gl/sepolicy

