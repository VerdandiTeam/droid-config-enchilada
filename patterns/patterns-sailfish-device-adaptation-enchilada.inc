%package -n patterns-sailfish-device-adaptation-enchilada
Summary: Jolla HW Adaptation enchilada
Requires: droid-hal-enchilada
Requires: droid-hal-enchilada-detritus
Requires: droid-hal-enchilada-img-boot
Requires: droid-hal-enchilada-kernel
Requires: droid-hal-enchilada-kernel-modules
Requires: droid-config-enchilada-sailfish
Requires: droid-config-enchilada-pulseaudio-settings
Requires: droid-config-enchilada-policy-settings
Requires: droid-config-enchilada-preinit-plugin
Requires: droid-config-enchilada-flashing
Requires: droid-config-enchilada-bluez5
Requires: droid-hal-version-enchilada

# Enchilada extras!
Requires: triambienced
Requires: onyx-triambience-settings-plugin
Requires: gestured
Requires: onyx-gesture-settings-plugin
Requires: nemo-qml-plugin-systemsettings

# FP daemon
Requires: droid-biometry-fp
Requires: sailfish-fpd-community

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Telephony
Requires: ofono-binder-plugin
Requires: ofono-binder-plugin-ext-qti

# Flashlight
Requires: jolla-settings-system-flashlight

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid-jb2q
# for call audio
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: audiosystem-passthrough-dummy-af

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android
Requires: usb-moded-connection-sharing-android-config

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
#Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock (and FP)
Requires: sailfish-devicelock-fpd

# Home encryption
Requires: sailfish-device-encryption-community

# For GPS
Requires: geoclue-provider-hybris

# For Bluetooth
Requires: bluebinder

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC for devices using Android 8 or newer as base
Requires: nfcd-binder-plugin
Requires: jolla-settings-system-nfc

%description -n patterns-sailfish-device-adaptation-enchilada
Pattern with packages for enchilada HW Adaptation

%files -n patterns-sailfish-device-adaptation-enchilada
