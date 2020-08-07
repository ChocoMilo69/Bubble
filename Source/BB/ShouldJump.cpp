// Fill out your copyright notice in the Description page of Project Settings.


#include "ShouldJump.h"
bool UShouldJump::shouldJump(){
    int n = rand()%100;
    if(n>95) return true;
    else return false;
}
