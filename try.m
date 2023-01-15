clc;
clear all;
%Generating matrix
%ones(3,2)
%zeros(2,3)
%eye(4)

% a=ones(4,2)
% net_size = size(a)
% rows = size(a,1)
% col = size(a,2)
% sum_of_row = sum(a,1)
% sum_of_col = sum(a,2)
% len = length(a)

% x = 1:20
% y=sin(x)
% z=cos(x)
% xlabel('x-axis')
% ylabel('y-axis')

% plot(x,y)
% hold on
% plot(x,z)
% grid on

% a=input("enter array")
% [m,i]=min(a)
% a(i)=69
% a

A = [4 1 3 ;2 6 7;3 1 8]
d=min(min(A))
[r c] = find (A==d)
A(r,c)=69

c=sort(A)