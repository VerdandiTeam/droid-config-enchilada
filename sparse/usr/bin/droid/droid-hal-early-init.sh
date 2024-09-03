#!/usr/bin/env bash

echo "qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK;IPA_WS;wlan_ipa;wlan_pno_wl;wcnss_filter_lock;vdev_stop" > /sys/class/misc/boeffla_wakelock_blocker/wakelock_blocker
