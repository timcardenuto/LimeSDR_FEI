#ifndef STRUCTPROPS_H
#define STRUCTPROPS_H

/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

*******************************************************************************************/

#include <ossie/CorbaUtils.h>
#include <CF/cf.h>
#include <ossie/PropertyMap.h>
#include <bulkio/bulkio.h>
typedef bulkio::connection_descriptor_struct connection_descriptor_struct;

#include <frontend/fe_tuner_struct_props.h>

namespace enums {
    // Enumerated values for FRONTEND::tuner_status_struct
    namespace frontend_tuner_status_struct {
        // Enumerated values for FRONTEND::tuner_status::reference_source
        namespace reference_source {
            static const CORBA::Long INTERNAL = 0;
            static const CORBA::Long EXTERNAL = 1;
        }
    }
}

struct frontend_tuner_status_struct_struct : public frontend::default_frontend_tuner_status_struct_struct {
    frontend_tuner_status_struct_struct () : frontend::default_frontend_tuner_status_struct_struct()
    {
    }

    static std::string getId() {
        return std::string("FRONTEND::tuner_status_struct");
    }

    static const char* getFormat() {
        return "bsssssdddbibdsisddbbhsb";
    }

    bool agc;
    std::string available_bandwidth;
    std::string available_frequency;
    std::string available_gain;
    std::string available_sample_rate;
    double bandwidth_tolerance;
    bool complex;
    CORBA::Long decimation;
    double gain;
    CORBA::Long reference_source;
    double sample_rate_tolerance;
    bool scan_mode_enabled;
    bool supports_scan;
    short tuner_number;
    bool valid;
};

inline bool operator>>= (const CORBA::Any& a, frontend_tuner_status_struct_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    const redhawk::PropertyMap& props = redhawk::PropertyMap::cast(*temp);
    if (props.contains("FRONTEND::tuner_status::agc")) {
        if (!(props["FRONTEND::tuner_status::agc"] >>= s.agc)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::allocation_id_csv")) {
        if (!(props["FRONTEND::tuner_status::allocation_id_csv"] >>= s.allocation_id_csv)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::available_bandwidth")) {
        if (!(props["FRONTEND::tuner_status::available_bandwidth"] >>= s.available_bandwidth)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::available_frequency")) {
        if (!(props["FRONTEND::tuner_status::available_frequency"] >>= s.available_frequency)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::available_gain")) {
        if (!(props["FRONTEND::tuner_status::available_gain"] >>= s.available_gain)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::available_sample_rate")) {
        if (!(props["FRONTEND::tuner_status::available_sample_rate"] >>= s.available_sample_rate)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::bandwidth")) {
        if (!(props["FRONTEND::tuner_status::bandwidth"] >>= s.bandwidth)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::bandwidth_tolerance")) {
        if (!(props["FRONTEND::tuner_status::bandwidth_tolerance"] >>= s.bandwidth_tolerance)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::center_frequency")) {
        if (!(props["FRONTEND::tuner_status::center_frequency"] >>= s.center_frequency)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::complex")) {
        if (!(props["FRONTEND::tuner_status::complex"] >>= s.complex)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::decimation")) {
        if (!(props["FRONTEND::tuner_status::decimation"] >>= s.decimation)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::enabled")) {
        if (!(props["FRONTEND::tuner_status::enabled"] >>= s.enabled)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::gain")) {
        if (!(props["FRONTEND::tuner_status::gain"] >>= s.gain)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::group_id")) {
        if (!(props["FRONTEND::tuner_status::group_id"] >>= s.group_id)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::reference_source")) {
        if (!(props["FRONTEND::tuner_status::reference_source"] >>= s.reference_source)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::rf_flow_id")) {
        if (!(props["FRONTEND::tuner_status::rf_flow_id"] >>= s.rf_flow_id)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::sample_rate")) {
        if (!(props["FRONTEND::tuner_status::sample_rate"] >>= s.sample_rate)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::sample_rate_tolerance")) {
        if (!(props["FRONTEND::tuner_status::sample_rate_tolerance"] >>= s.sample_rate_tolerance)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::scan_mode_enabled")) {
        if (!(props["FRONTEND::tuner_status::scan_mode_enabled"] >>= s.scan_mode_enabled)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::supports_scan")) {
        if (!(props["FRONTEND::tuner_status::supports_scan"] >>= s.supports_scan)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::tuner_number")) {
        if (!(props["FRONTEND::tuner_status::tuner_number"] >>= s.tuner_number)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::tuner_type")) {
        if (!(props["FRONTEND::tuner_status::tuner_type"] >>= s.tuner_type)) return false;
    }
    if (props.contains("FRONTEND::tuner_status::valid")) {
        if (!(props["FRONTEND::tuner_status::valid"] >>= s.valid)) return false;
    }
    return true;
}

inline void operator<<= (CORBA::Any& a, const frontend_tuner_status_struct_struct& s) {
    redhawk::PropertyMap props;
 
    props["FRONTEND::tuner_status::agc"] = s.agc;
 
    props["FRONTEND::tuner_status::allocation_id_csv"] = s.allocation_id_csv;
 
    props["FRONTEND::tuner_status::available_bandwidth"] = s.available_bandwidth;
 
    props["FRONTEND::tuner_status::available_frequency"] = s.available_frequency;
 
    props["FRONTEND::tuner_status::available_gain"] = s.available_gain;
 
    props["FRONTEND::tuner_status::available_sample_rate"] = s.available_sample_rate;
 
    props["FRONTEND::tuner_status::bandwidth"] = s.bandwidth;
 
    props["FRONTEND::tuner_status::bandwidth_tolerance"] = s.bandwidth_tolerance;
 
    props["FRONTEND::tuner_status::center_frequency"] = s.center_frequency;
 
    props["FRONTEND::tuner_status::complex"] = s.complex;
 
    props["FRONTEND::tuner_status::decimation"] = s.decimation;
 
    props["FRONTEND::tuner_status::enabled"] = s.enabled;
 
    props["FRONTEND::tuner_status::gain"] = s.gain;
 
    props["FRONTEND::tuner_status::group_id"] = s.group_id;
 
    props["FRONTEND::tuner_status::reference_source"] = s.reference_source;
 
    props["FRONTEND::tuner_status::rf_flow_id"] = s.rf_flow_id;
 
    props["FRONTEND::tuner_status::sample_rate"] = s.sample_rate;
 
    props["FRONTEND::tuner_status::sample_rate_tolerance"] = s.sample_rate_tolerance;
 
    props["FRONTEND::tuner_status::scan_mode_enabled"] = s.scan_mode_enabled;
 
    props["FRONTEND::tuner_status::supports_scan"] = s.supports_scan;
 
    props["FRONTEND::tuner_status::tuner_number"] = s.tuner_number;
 
    props["FRONTEND::tuner_status::tuner_type"] = s.tuner_type;
 
    props["FRONTEND::tuner_status::valid"] = s.valid;
    a <<= props;
}

inline bool operator== (const frontend_tuner_status_struct_struct& s1, const frontend_tuner_status_struct_struct& s2) {
    if (s1.agc!=s2.agc)
        return false;
    if (s1.allocation_id_csv!=s2.allocation_id_csv)
        return false;
    if (s1.available_bandwidth!=s2.available_bandwidth)
        return false;
    if (s1.available_frequency!=s2.available_frequency)
        return false;
    if (s1.available_gain!=s2.available_gain)
        return false;
    if (s1.available_sample_rate!=s2.available_sample_rate)
        return false;
    if (s1.bandwidth!=s2.bandwidth)
        return false;
    if (s1.bandwidth_tolerance!=s2.bandwidth_tolerance)
        return false;
    if (s1.center_frequency!=s2.center_frequency)
        return false;
    if (s1.complex!=s2.complex)
        return false;
    if (s1.decimation!=s2.decimation)
        return false;
    if (s1.enabled!=s2.enabled)
        return false;
    if (s1.gain!=s2.gain)
        return false;
    if (s1.group_id!=s2.group_id)
        return false;
    if (s1.reference_source!=s2.reference_source)
        return false;
    if (s1.rf_flow_id!=s2.rf_flow_id)
        return false;
    if (s1.sample_rate!=s2.sample_rate)
        return false;
    if (s1.sample_rate_tolerance!=s2.sample_rate_tolerance)
        return false;
    if (s1.scan_mode_enabled!=s2.scan_mode_enabled)
        return false;
    if (s1.supports_scan!=s2.supports_scan)
        return false;
    if (s1.tuner_number!=s2.tuner_number)
        return false;
    if (s1.tuner_type!=s2.tuner_type)
        return false;
    if (s1.valid!=s2.valid)
        return false;
    return true;
}

inline bool operator!= (const frontend_tuner_status_struct_struct& s1, const frontend_tuner_status_struct_struct& s2) {
    return !(s1==s2);
}

struct channel_struct {
    channel_struct ()
    {
    }

    static std::string getId() {
        return std::string("channels::channel");
    }

    static const char* getFormat() {
        return "sshsdddddddddddddd[s]";
    }

    std::string ch_name;
    std::string tuner_type;
    short chan_num;
    std::string antenna;
    double bandwidth_current;
    double bandwidth_min;
    double bandwidth_max;
    double rate_current;
    double rate_min;
    double rate_max;
    double freq_current;
    double freq_min;
    double freq_max;
    double gain_current;
    double gain_min;
    double gain_max;
    double clock_min;
    double clock_max;
    std::vector<std::string> available_antennas;
};

inline bool operator>>= (const CORBA::Any& a, channel_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    const redhawk::PropertyMap& props = redhawk::PropertyMap::cast(*temp);
    if (props.contains("device_channels::ch_name")) {
        if (!(props["device_channels::ch_name"] >>= s.ch_name)) return false;
    }
    if (props.contains("device_channels::tuner_type")) {
        if (!(props["device_channels::tuner_type"] >>= s.tuner_type)) return false;
    }
    if (props.contains("device_channels::chan_num")) {
        if (!(props["device_channels::chan_num"] >>= s.chan_num)) return false;
    }
    if (props.contains("device_channels::antenna")) {
        if (!(props["device_channels::antenna"] >>= s.antenna)) return false;
    }
    if (props.contains("device_channels::bandwidth_current")) {
        if (!(props["device_channels::bandwidth_current"] >>= s.bandwidth_current)) return false;
    }
    if (props.contains("device_channels::bandwidth_min")) {
        if (!(props["device_channels::bandwidth_min"] >>= s.bandwidth_min)) return false;
    }
    if (props.contains("device_channels::bandwidth_max")) {
        if (!(props["device_channels::bandwidth_max"] >>= s.bandwidth_max)) return false;
    }
    if (props.contains("device_channels::rate_current")) {
        if (!(props["device_channels::rate_current"] >>= s.rate_current)) return false;
    }
    if (props.contains("device_channels::rate_min")) {
        if (!(props["device_channels::rate_min"] >>= s.rate_min)) return false;
    }
    if (props.contains("device_channels::rate_max")) {
        if (!(props["device_channels::rate_max"] >>= s.rate_max)) return false;
    }
    if (props.contains("device_channels::freq_current")) {
        if (!(props["device_channels::freq_current"] >>= s.freq_current)) return false;
    }
    if (props.contains("device_channels::freq_min")) {
        if (!(props["device_channels::freq_min"] >>= s.freq_min)) return false;
    }
    if (props.contains("device_channels::freq_max")) {
        if (!(props["device_channels::freq_max"] >>= s.freq_max)) return false;
    }
    if (props.contains("device_channels::gain_current")) {
        if (!(props["device_channels::gain_current"] >>= s.gain_current)) return false;
    }
    if (props.contains("device_channels::gain_min")) {
        if (!(props["device_channels::gain_min"] >>= s.gain_min)) return false;
    }
    if (props.contains("device_channels::gain_max")) {
        if (!(props["device_channels::gain_max"] >>= s.gain_max)) return false;
    }
    if (props.contains("device_channels::clock_min")) {
        if (!(props["device_channels::clock_min"] >>= s.clock_min)) return false;
    }
    if (props.contains("device_channels::clock_max")) {
        if (!(props["device_channels::clock_max"] >>= s.clock_max)) return false;
    }
    if (props.contains("device_channels::available_antennas")) {
        if (!(props["device_channels::available_antennas"] >>= s.available_antennas)) return false;
    }
    return true;
}

inline void operator<<= (CORBA::Any& a, const channel_struct& s) {
    redhawk::PropertyMap props;
 
    props["device_channels::ch_name"] = s.ch_name;
 
    props["device_channels::tuner_type"] = s.tuner_type;
 
    props["device_channels::chan_num"] = s.chan_num;
 
    props["device_channels::antenna"] = s.antenna;
 
    props["device_channels::bandwidth_current"] = s.bandwidth_current;
 
    props["device_channels::bandwidth_min"] = s.bandwidth_min;
 
    props["device_channels::bandwidth_max"] = s.bandwidth_max;
 
    props["device_channels::rate_current"] = s.rate_current;
 
    props["device_channels::rate_min"] = s.rate_min;
 
    props["device_channels::rate_max"] = s.rate_max;
 
    props["device_channels::freq_current"] = s.freq_current;
 
    props["device_channels::freq_min"] = s.freq_min;
 
    props["device_channels::freq_max"] = s.freq_max;
 
    props["device_channels::gain_current"] = s.gain_current;
 
    props["device_channels::gain_min"] = s.gain_min;
 
    props["device_channels::gain_max"] = s.gain_max;
 
    props["device_channels::clock_min"] = s.clock_min;
 
    props["device_channels::clock_max"] = s.clock_max;
 
    props["device_channels::available_antennas"] = s.available_antennas;
    a <<= props;
}

inline bool operator== (const channel_struct& s1, const channel_struct& s2) {
    if (s1.ch_name!=s2.ch_name)
        return false;
    if (s1.tuner_type!=s2.tuner_type)
        return false;
    if (s1.chan_num!=s2.chan_num)
        return false;
    if (s1.antenna!=s2.antenna)
        return false;
    if (s1.bandwidth_current!=s2.bandwidth_current)
        return false;
    if (s1.bandwidth_min!=s2.bandwidth_min)
        return false;
    if (s1.bandwidth_max!=s2.bandwidth_max)
        return false;
    if (s1.rate_current!=s2.rate_current)
        return false;
    if (s1.rate_min!=s2.rate_min)
        return false;
    if (s1.rate_max!=s2.rate_max)
        return false;
    if (s1.freq_current!=s2.freq_current)
        return false;
    if (s1.freq_min!=s2.freq_min)
        return false;
    if (s1.freq_max!=s2.freq_max)
        return false;
    if (s1.gain_current!=s2.gain_current)
        return false;
    if (s1.gain_min!=s2.gain_min)
        return false;
    if (s1.gain_max!=s2.gain_max)
        return false;
    if (s1.clock_min!=s2.clock_min)
        return false;
    if (s1.clock_max!=s2.clock_max)
        return false;
    if (s1.available_antennas!=s2.available_antennas)
        return false;
    return true;
}

inline bool operator!= (const channel_struct& s1, const channel_struct& s2) {
    return !(s1==s2);
}

#endif // STRUCTPROPS_H
