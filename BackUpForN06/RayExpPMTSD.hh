#ifndef RAYEXPPMTSD_h
#define RAYEXPPMTSD_h 1

#include "G4VSensitiveDetector.hh"
#include "G4Step.hh"
#include "RayExpPMTHit.hh"

class RayExpPMTSD : public G4VSensitiveDetector {
    public:
        RayExpPMTSD(G4String name);
        ~RayExpPMTSD();

        void Initialize(G4HCofThisEvent* HCE);
        G4bool ProcessHits(G4Step* aStep, G4TouchableHistory* ROhist);
        void EndOfEvent(G4HCofThisEvent* HCE);

    private:
        RayExpPMTHitsCollection* PMTCollection;
        bool iftrig;
        double energy;

    private:
        G4int N;
        G4double TID;
        G4double PID;
        G4double StepLength;
        G4double velocity;
};

#endif
