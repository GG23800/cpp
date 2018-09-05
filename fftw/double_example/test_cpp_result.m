clear all;
close all;

y=load("line_example.txt");
env=load("envelope.txt");

x=0:16383;

figure(1)
plot(x,abs(y),x,env*2/16384);