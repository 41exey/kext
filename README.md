# test iokit kext

# Installation

sudo cp -R kext.kext /System/Library/Extensions/<br/>
sudo chown -R root:wheel /System/Library/Extensions/kext.kext<br/>
sudo chmod -R 0644 /System/Library/Extensions/kext.kext<br/>
sudo kextload -v /System/Library/Extensions/kext.kext<br/>


# Testing

sudo kextstat |grep home.kext<br/>
sudo dmesg |grep Hello<br/>
