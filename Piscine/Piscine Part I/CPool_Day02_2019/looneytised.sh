#!/bin/bash
grep -E "theo1|steven1|arnaud1|pierre-jean" | sed -e s/"theo1"/"Wile E. Coyote"/g | sed -e s/"steven1"/"Daffy Duck"/g | sed -e s/"arnaud1"/"Porky Pig"/g | sed -e s/"pierre-jean"/"Marvin the Martian"/g
