#!/bin/bash
# dl: left JO20UT
# dl: up JO45PC
# dl: right JO71QW
# dl: down JN56BX

#for a in {a..z}; do for b in {a..z}; do 
#for c in {0..9}; do for d in {0..9}; do 
a=j; 
#for b in {n..o}; do 
b=o;
for c in {0..9}; do 
#for d in {0..9}; do 

n=$a$b$c$d;
test -e $n ||wget -O $n 'http://www.darc.de/echolink-bin/relais.pl?&sel=gridsq&gs=${n}MM&ctrcall=&dxcc=ALL&maxgateways=1000&printas=csv&type=DARC&type=DL3EL&type=el&type=il&type=ds&type=Baken&kmmls=km' 
echo $n

done;
done;


#done
#done
