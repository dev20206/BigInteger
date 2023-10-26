#ifndef _BigInteger_h
#define _BigInteger_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1001

struct node {
    int data;
    struct node* next;
};

struct BigInteger {
    struct node* l;
    int length;
    int sign; // 1 for positive, -1 for negative
};

void addatfront(struct node** num1, int data);
struct BigInteger initialize(char* s);
void display(struct BigInteger num1);
struct BigInteger add(struct BigInteger num1, struct BigInteger num2);
struct BigInteger sub(struct BigInteger num1, struct BigInteger num2);
struct BigInteger mul(struct BigInteger num1, struct BigInteger num2);
struct BigInteger div1(struct BigInteger dividend, struct BigInteger divisor);
struct BigInteger mod(struct BigInteger dividend, struct BigInteger divisor);
#endif