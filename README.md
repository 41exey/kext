# test iokit kext

# Installation

sudo cp -R kext.kext /System/Library/Extensions/
sudo chown -R root:wheel /System/Library/Extensions/kext.kext
sudo chmod -R 0644 /System/Library/Extensions/kext.kext
sudo kextload -v /System/Library/Extensions/kext.kext


# Testing

sudo kextstat |grep home.kext
sudo dmesg |grep Hello
