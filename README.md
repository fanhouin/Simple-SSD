# Simple-SSD
## Use FUSE to implement a simple file system for simulate SSD

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
# simple test
bash test.sh test1
bash test.sh test2
or
# the test will be upload HAHA
# 13579and2468: god test
bash godtest.sh test1
bash godtest.sh test2
bash godtest.sh test3
bash godtest.sh test4
or
# the test will be upload HAHA
# ta final test
./ta_test
# test all cases
make test 
```