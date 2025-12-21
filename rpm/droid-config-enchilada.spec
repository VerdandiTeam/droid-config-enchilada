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

# For bluez5
%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-enchilada.inc
%include patterns/patterns-sailfish-device-configuration-enchilada.inc
