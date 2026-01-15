// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsUtilityFunctionLibrary.h"

float UGraphicsUtilityFunctionLibrary::MoveTowards(float Current, float Target, float Delta)
{
   if (Current < Target)
   {
      Current += Delta;
      if (Current > Target)
         Current = Target;
   }
   
   if (Current > Target)
   {
      Current -= Delta;
      if (Current < Target)
         Current = Target;
   }

   return Current;
}