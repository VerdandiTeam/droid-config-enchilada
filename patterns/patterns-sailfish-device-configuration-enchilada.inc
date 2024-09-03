%package -n patterns-sailfish-device-configuration-enchilada
Summary: Jolla Configuration enchilada
Requires: patterns-sailfish-device-configuration-common-enchilada
Requires: patterns-sailfish-device-adaptation-enchilada

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps
# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working
Requires: csd

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

# bloat
Recommends: harbour-storeman
Recommends: sailfishos-chum-gui
Recommends: punky 

%description -n patterns-sailfish-device-configuration-enchilada
Pattern with packages for enchilada configurations

%files -n patterns-sailfish-device-configuration-enchilada
