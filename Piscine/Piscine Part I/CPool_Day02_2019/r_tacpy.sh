#!/bin/bash
cut -d ":" -f1 | sed -n '2-1p' | sort -r | head -n 42 | rev | 
