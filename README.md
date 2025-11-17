# SynAck
A minimal TCP server library written in C.  
Direct, portable, and built for engineers who prefer control over convenience.

## Overview
SynAck abstracts the repetitive setup of TCP sockets while preserving full system-level control.  
It allows creating robust network servers with only a few lines of code, ideal for systems and embedded development.

## Features
- Simple API: start, handle, and stop a TCP server easily.  
- Threaded or synchronous connection handling.  
- IPv4 and IPv6 supported.  
- Graceful lifecycle management (`start`, `stop`, `join`).  
- Cross-platform POSIX compatibility.

## Philosophy
SynAck is designed for those who value predictability and performance over abstractions.  
No frameworks, no dependencies — just the wire and your C code.
