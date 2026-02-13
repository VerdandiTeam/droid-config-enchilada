#!/usr/bin/env bash

SIZE=$(df --output=size -BM /data | tail -n 1 | tr -d '[:space:][M]')
IMAGE_SIZE=$(( SIZE-10240 ))

mkdir -p /etc/sailfish-device-encryption-community/

cat >/etc/sailfish-device-encryption-community/devices.ini <<EOL
[home_device]
name=Home
device=/home.img
mapper=home_encrypted
mount=/home
type=file
size_mb=$IMAGE_SIZE
EOL
