/* -*- mode: c++; fill-column: 132; c-basic-offset: 4; indent-tabs-mode: nil -*- */

// =-=-=-=-=-=-=-
// eirods includes
#include "eirods_network_object.h"
#include "eirods_network_manager.h"

namespace eirods {

    // =-=-=-=-=-=-=-
    // public - ctor
    network_object::network_object() :
        socket_handle_(0) {

    } // ctor

    // =-=-=-=-=-=-=-
    // public - ctor
    network_object::network_object(
        const rsComm_t& _comm ) : 
        socket_handle_( _comm.sock ) {

    } // ctor

    // =-=-=-=-=-=-=-
    // public - cctor
    network_object::network_object( 
        const network_object& _rhs ) {
        socket_handle_ = _rhs.socket_handle_;

    } // cctor

    // =-=-=-=-=-=-=-
    // public - dtor
    network_object::~network_object() {
    } // dtor

    // =-=-=-=-=-=-=-
    // public - assignment operator
    network_object& network_object::operator=( 
        const network_object& _rhs ) {
        socket_handle_ = _rhs.socket_handle_;

        return *this;

    } // operator=
 
    // =-=-=-=-=-=-=-
    // public - get rule engine kvp
    error network_object::get_re_vars(
        keyValPair_t& _kvp ) {
        return SUCCESS();
    } // get_re_vars

}; // namespace eirods



