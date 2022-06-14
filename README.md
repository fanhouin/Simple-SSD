# Simple-SSD
## Use FUSE to implement a simple file system for simulate SSD

|GitHub account name|Student ID|Name|
|---|---|---|
|fanhouin|310552001|樊浩賢|

### Prerequisites
```bash
apt-cache search fuse
sudo apt-get update
sudo apt-get install fuse3
sudo apt-get install libfuse3-dev
reboot 
```

### Run
```bash
# terminal 1
mkdir /tmp/ssd
make
make run

# terminal 2
sh test.sh test1
sh test.sh test2
or
# the test will be upload HAHA
sh godtest.sh test1
sh godtest.sh test2
sh godtest.sh test3
```