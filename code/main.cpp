#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <fstream>

#include "CalculationOfAccelerationResistanceOfSecondaryCircuitWaterRisingSpace.h"
#include "CalculationOfFrictionalResistanceInUTube.h"
#include "CalculationOfLocalResistanceOfPrimaryCircuitWater.h"
#include "CalculationOfResistanceOfFlowDistributionOrificeInSecondaryWaterRisingSpace.h"
#include "CalculationOfResistanceOfSecondaryCircuitWaterVaporSeparator.h"
#include "CalculationOfTheFrictionalResistanceOfTheSecondaryCircuitWaterRisingSpace.h"
#include "CalculationOfTheLocalResistanceOfTheSecondaryCircuitWaterRisingSpace.h"
#include "CalculationOfTheResistanceOfTheWaterBendInTheSecondaryCircuitWaterRiseSpace.h"
#include "CalculationOfTheSpaceResistanceOfTheSecondaryCircuitWaterDrop.h"
#include "CalculationOfTheTotalResistanceOfTheSecondaryCircuitWaterRisingSpace.h"
#include "CalculationOfTotalResistanceOfPrimaryCircuitWater.h"
#include "CalculationOfTotalResistanceOfSecondaryCircuitWaterCirculation.h"
#include "GivenCondition.h"
#include "HeatTransferCalculation.h"
#include "HeatTransferTube.h"
#include "LowerCylinder.h"
#include "MainPipeInnerDiameter.h"
#include "MotionHeadCalculation.h"
#include "PreheatingSectionHeightCalculation.h"
#include "SphericalBottomHead.h"
#include "TubeBundleStructure.h"
#include "UpperCylinder.h"


using namespace std;


int main(int argc , char** _argv){

    ios::sync_with_stdio(false);
    
    thermalEquilibrium();
    heatTransfer();
    tubeBundle();
    mainPipeInnerDiameter();
    primaryCircuitWaterResistance();
    waterCirculationResistanceInTheSecondaryCircuit();
    resistanceOfWaterSeparator();
    totalCirculationResistance();
    motionHead();
    heatTransferTube();
    lowerCylinder();
    upperCylinder();
    sphericalLowerHead();
    tubeSheet();
    
    return 0;
}