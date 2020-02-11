#!/bin/bash
cut -d: -f5 | grep -ci " $1"
