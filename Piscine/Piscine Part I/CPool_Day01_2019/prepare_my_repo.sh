#!/bin/bash
blih -u jeremy.dumesny@epitech.eu repository create $1
blih -u jeremy.dumesny@epitech.eu repository setacl $1 ramassage-tek r
blih -u jeremy.dumesny@epitech.eu repository getacl $1 
