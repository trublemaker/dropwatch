# What is Dropwatch?
Dropwatch is a project I started in an effort to improve the ability for
developers and system administrator to diagnose problems in the Linux Networking
stack, specifically in our ability to diagnose where packets are getting
dropped.  From my probing, I've come to the conclusion that there are four main
shortcommings in our current environment:

* Consolidation, or lack thereof.  Currently, if you would like to check on the
status of dropped packets in the kernel, you need to check at least 3 places,
and possibly more: The /proc/net/snmp file, the netstat utility, the tc utility,
and ethool.  This project aims to consolidate several of those checks into one
tool, making it easier for a sysadmin or developer to detect lost packets
 
* Clarity of information.  Dropped packets are not obvious.  a sysadmin needs
to be intimately familiar with each of the above tools to understand which
events or statistics correlate to a dropped packet and which do not.  While that
is often self evident, it is also often not.  Dropwatch aims to improve that
clarity

* Ambiguity.  Even when a dropped packet is detected, the causes for those
dropped packets are not always clear.  Does a UDPInError mean the application
receive buffer was full, or does it mean its checksum was bad?  Dropwatch
attempts to disambiguate the causes for dropped packets.

* Performance.  Utilties can be written to aggregate the data in the various
other utilities to solve some of these problems, but such solutions require
periodic polling of several interfaces, which is far from optimal, especially
when lost packets are rare.  This solution improves on the performance aspect by
implementing a kernel feature which allows asyncronous notification of dropped
packets when they happen.

## Example screen:

![Screen example](/drop_watch_screen.jpg)

Questions
Feel free to email me directly at nhorman@redhat.com with question, or if you
find a bug, open a trac ticket at https://fedorahosted.org/dropwatch/

# How to build on Ubuntu 14.04?

## Dependencies

First of all you need to have CONFIG_NET_DROP_MONITOR enabled in your kernel https://github.com/pavel-odintsov/drop_watch/wiki/Ubuntu-14.04-LTS-kernel-with-drop_monitor-support 

## Install dependencies:
```sudo apt-get install -y libnl-3-dev libnl-genl-3-dev binutils-dev libreadline6-dev```

Then clone repo, cd to src folder and run make.

And finally run tool:
```./dropwatch -l kas```

# New
Build for mips to debug mips-linux-kernel
My Route is Phicomm K2(PSG 1218),while use udpxy, can not get mcast data,so i want to use dropwatch to see how the package was droped. 

# Changes
1.modi src/Makefile, add $(CC)

# Build

build support lib:readline,nl3,binutils-dev,ncurses

cd src
make 