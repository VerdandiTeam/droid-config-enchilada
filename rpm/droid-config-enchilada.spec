%define device enchilada
%define vendor oneplus

%define vendor_pretty OnePlus
%define device_pretty OnePlus 6

%define community_adaptation 1

%define pixel_ratio 1.5

Provides: ofono-configs
Obsoletes: ofono-configs-mer

Provides: usb-moded-configs
Obsoletes: usb-moded-defaults

%include droid-configs-device/droid-configs.inc
