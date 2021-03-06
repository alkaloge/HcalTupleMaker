#ifndef HcalTupleMaker_L1GCTJets_h
#define HcalTupleMaker_L1GCTJets_h

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"

class HcalTupleMaker_L1GCTJets : public edm::EDProducer {
 public:
  explicit HcalTupleMaker_L1GCTJets(const edm::ParameterSet&);

 private:
  void produce( edm::Event &, const edm::EventSetup & );
  std::vector<edm::InputTag> inputTags;
  edm::InputTag   tpInputTag;
  std::string     prefix,suffix;
};

#endif
