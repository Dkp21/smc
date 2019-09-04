.PHONY: smc ts

all: smc main

smc:
	java -jar ~/smc_6_6_3/bin/Smc.jar -c++ turnstile.sm

ts:
	g++ main.cpp turnstile_sm.cpp -std=c++11 -I/home/dpatel/smc_6_6_3/lib/C++/

