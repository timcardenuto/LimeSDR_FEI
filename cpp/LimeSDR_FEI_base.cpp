#include "LimeSDR_FEI_base.h"

/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

    The following class functions are for the base class for the device class. To
    customize any of these functions, do not modify them here. Instead, overload them
    on the child class

******************************************************************************************/

LimeSDR_FEI_base::LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl) :
    Device_impl(devMgr_ior, id, lbl, sftwrPrfl),
    ThreadedComponent()
{
    construct();
}

LimeSDR_FEI_base::LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev) :
    Device_impl(devMgr_ior, id, lbl, sftwrPrfl, compDev),
    ThreadedComponent()
{
    construct();
}

LimeSDR_FEI_base::LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities) :
    Device_impl(devMgr_ior, id, lbl, sftwrPrfl, capacities),
    ThreadedComponent()
{
    construct();
}

LimeSDR_FEI_base::LimeSDR_FEI_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev) :
    Device_impl(devMgr_ior, id, lbl, sftwrPrfl, capacities, compDev),
    ThreadedComponent()
{
    construct();
}

LimeSDR_FEI_base::~LimeSDR_FEI_base()
{
    RFInfo_in->_remove_ref();
    RFInfo_in = 0;
    RFInfo_in_2->_remove_ref();
    RFInfo_in_2 = 0;
    DigitalTuner_in->_remove_ref();
    DigitalTuner_in = 0;
    dataFloatTX_in->_remove_ref();
    dataFloatTX_in = 0;
    dataFloatTX_in_2->_remove_ref();
    dataFloatTX_in_2 = 0;
    dataFloat_out->_remove_ref();
    dataFloat_out = 0;
    RFInfoTX_out->_remove_ref();
    RFInfoTX_out = 0;
    RFInfoTX_out_2->_remove_ref();
    RFInfoTX_out_2 = 0;
}

void LimeSDR_FEI_base::construct()
{
    loadProperties();

    RFInfo_in = new FRONTEND_RFInfo_In_i("RFInfo_in", this);
    RFInfo_in->setLogger(this->_baseLog->getChildLogger("RFInfo_in", "ports"));
    addPort("RFInfo_in", RFInfo_in);
    RFInfo_in_2 = new FRONTEND_RFInfo_In_i("RFInfo_in_2", this);
    RFInfo_in_2->setLogger(this->_baseLog->getChildLogger("RFInfo_in_2", "ports"));
    addPort("RFInfo_in_2", RFInfo_in_2);
    DigitalTuner_in = new FRONTEND_DigitalTuner_In_i("DigitalTuner_in", this);
    DigitalTuner_in->setLogger(this->_baseLog->getChildLogger("DigitalTuner_in", "ports"));
    addPort("DigitalTuner_in", DigitalTuner_in);
    dataFloatTX_in = new bulkio::InFloatPort("dataFloatTX_in");
    dataFloatTX_in->setLogger(this->_baseLog->getChildLogger("dataFloatTX_in", "ports"));
    addPort("dataFloatTX_in", dataFloatTX_in);
    dataFloatTX_in_2 = new bulkio::InFloatPort("dataFloatTX_in_2");
    dataFloatTX_in_2->setLogger(this->_baseLog->getChildLogger("dataFloatTX_in_2", "ports"));
    addPort("dataFloatTX_in_2", dataFloatTX_in_2);
    dataFloat_out = new bulkio::OutFloatPort("dataFloat_out");
    dataFloat_out->setLogger(this->_baseLog->getChildLogger("dataFloat_out", "ports"));
    addPort("dataFloat_out", dataFloat_out);
    RFInfoTX_out = new frontend::OutRFInfoPort("RFInfoTX_out");
    RFInfoTX_out->setLogger(this->_baseLog->getChildLogger("RFInfoTX_out", "ports"));
    addPort("RFInfoTX_out", RFInfoTX_out);
    RFInfoTX_out_2 = new frontend::OutRFInfoPort("RFInfoTX_out_2");
    RFInfoTX_out_2->setLogger(this->_baseLog->getChildLogger("RFInfoTX_out_2", "ports"));
    addPort("RFInfoTX_out_2", RFInfoTX_out_2);

    this->addPropertyListener(connectionTable, this, &LimeSDR_FEI_base::connectionTableChanged);

}

/*******************************************************************************************
    Framework-level functions
    These functions are generally called by the framework to perform housekeeping.
*******************************************************************************************/
void LimeSDR_FEI_base::start() throw (CORBA::SystemException, CF::Resource::StartError)
{
    Device_impl::start();
    ThreadedComponent::startThread();
}

void LimeSDR_FEI_base::stop() throw (CORBA::SystemException, CF::Resource::StopError)
{
    Device_impl::stop();
    if (!ThreadedComponent::stopThread()) {
        throw CF::Resource::StopError(CF::CF_NOTSET, "Processing thread did not die");
    }
}

void LimeSDR_FEI_base::releaseObject() throw (CORBA::SystemException, CF::LifeCycle::ReleaseError)
{
    // This function clears the device running condition so main shuts down everything
    try {
        stop();
    } catch (CF::Resource::StopError& ex) {
        // TODO - this should probably be logged instead of ignored
    }

    Device_impl::releaseObject();
}

void LimeSDR_FEI_base::connectionTableChanged(const std::vector<connection_descriptor_struct>* oldValue, const std::vector<connection_descriptor_struct>* newValue)
{
    dataFloat_out->updateConnectionFilter(*newValue);
}

void LimeSDR_FEI_base::loadProperties()
{
    addProperty(device_kind,
                "FRONTEND::TUNER",
                "DCE:cdc5ee18-7ceb-4ae6-bf4c-31f983179b4d",
                "device_kind",
                "readonly",
                "",
                "eq",
                "allocation");

    addProperty(device_model,
                "DCE:0f99b2e4-9903-4631-9846-ff349d18ecfb",
                "device_model",
                "readonly",
                "",
                "eq",
                "allocation");

    addProperty(oversample_ratio,
                1,
                "oversample_ratio",
                "oversample_ratio",
                "readwrite",
                "",
                "external",
                "property");

    addProperty(device_addr,
                "device_addr",
                "device_addr",
                "readwrite",
                "",
                "external",
                "property");

    addProperty(reset,
                false,
                "reset",
                "reset",
                "readwrite",
                "",
                "external",
                "property");

    addProperty(frontend_listener_allocation,
                frontend_listener_allocation_struct(),
                "FRONTEND::listener_allocation",
                "frontend_listener_allocation",
                "writeonly",
                "",
                "external",
                "allocation");

    addProperty(frontend_tuner_allocation,
                frontend_tuner_allocation_struct(),
                "FRONTEND::tuner_allocation",
                "frontend_tuner_allocation",
                "writeonly",
                "",
                "external",
                "allocation");

    addProperty(frontend_tuner_status,
                "FRONTEND::tuner_status",
                "frontend_tuner_status",
                "readonly",
                "",
                "external",
                "property");

    addProperty(connectionTable,
                "connectionTable",
                "",
                "readonly",
                "",
                "external",
                "property");

    addProperty(device_channels,
                "device_channels",
                "device_channels",
                "readonly",
                "",
                "external",
                "property");

}


