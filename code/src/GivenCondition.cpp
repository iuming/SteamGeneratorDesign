#include "GivenCondition.h"

GivenCondition::GivenCondition(/* args */)
{
}

GivenCondition::~GivenCondition()
{
}

double GivenCondition::getHeatReleaseOfPrimaryCircuit(){
    return HeatReleaseOfPrimaryCircuit;
}

double GivenCondition::getPrimaryCircuitWaterInletTemperature(){
    return PrimaryCircuitWaterInletTemperature;
}

double GivenCondition::getPrimaryCircuitWaterOutletTemperature(){
    return PrimaryCircuitWaterOutletTemperature;
}

double GivenCondition::getAverageTemperatureOfPrimaryCircuit(double PrimaryCircuitWaterInletTemperature, double PrimaryCircuitWaterOutletTemperature){
    return (PrimaryCircuitWaterInletTemperature + PrimaryCircuitWaterOutletTemperature) / 2;
}

