#ifndef GIVENCONDITION_h
#define GIVENCONDITION_h 1

class GivenCondition
{
private:
    /* data */
    double HeatReleaseOfPrimaryCircuit = 231211.0;
    double PrimaryCircuitWorkingPressure = 15.0;
    double PrimaryCircuitWaterInletTemperature = 310;
    double PrimaryCircuitWaterOutletTemperature = 290;
    double AverageTemperatureOfPrimaryCircuit;
    double PrimaryCircuitWaterInletEnthalpy;
    double PrimaryCircuitWaterOutletEnthalpy;
    double SteamGeneratorThermalEfficiency = 0.99;
    double PrimaryCircuitWaterFlow;
    double WorkingPressureOfSecondaryCircuit = 5;
    double SaturationTemperatureOfSecondaryCircuit;
    double WaterSaturationEnthalpyOfSecondaryCircuit;
    double SecondaryCircuitFeedWaterTemperature;
    double EnthalpyOfSecondaryCircuitFeedWater;
    double LatentHeatOfVaporization;
    double SteamDryness;
    double EmissionFactor;
    double SecondaryCircuitSteamProduction;
    double SecondaryCircuitSewageDischarge;
public:
    GivenCondition(/* args */);
    ~GivenCondition();

    double getHeatReleaseOfPrimaryCircuit();
    double getPrimaryCircuitWorkingPressure();
    double getPrimaryCircuitWaterInletTemperature();
    double getPrimaryCircuitWaterOutletTemperature();
    double getAverageTemperatureOfPrimaryCircuit(double PrimaryCircuitWaterInletTemperature, double PrimaryCircuitWaterOutletTemperature);
    double getPrimaryCircuitWaterInletEnthalpy();
    double getPrimaryCircuitWaterOutletEnthalpy();
    double getSteamGeneratorThermalEfficiency();
    double getPrimaryCircuitWaterFlow();
    double getWorkingPressureOfSecondaryCircuit();
    double getSaturationTemperatureOfSecondaryCircuit();
    double getWaterSaturationEnthalpyOfSecondaryCircuit();
    double getSecondaryCircuitFeedWaterTemperature();
    double getEnthalpyOfSecondaryCircuitFeedWater();
    double getLatentHeatOfVaporization();
    double getSteamDryness();
    double getEmissionFactor();
    double getSecondaryCircuitSteamProduction();
    double getSecondaryCircuitSewageDischarge();
};

#endif