// -*- C++ -*-
// $Id$

#ifndef CONNECTOR1_EXEC_H_
#define CONNECTOR1_EXEC_H_

#include /**/ "ace/pre.h"

#include "Connector1EC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Connector1_exec_export.h"
#include "tao/LocalObject.h"

#include "dds4ccm/impl/ndds/DDS4CCM_Traits.h"
#include "dds4ccm/impl/ndds/DDS_Event_Connector_T.h"

#include "Base/BaseSupport.h"

namespace CIAO_SharedDP_Connector1_Connector1_Impl
{

  typedef CIAO::DDS4CCM::RTI::Type_Traits <
    SharedDPTest1,
    SharedDPTest1Seq,
    SharedDPTest1TypeSupport,
    SharedDPTest1DataWriter,
    SharedDPTest1DataReader > SharedDPTest1_DDS_Traits;

  typedef CIAO::DDS4CCM::Connector_Traits <
    ::CIAO_SharedDP_Connector1_Connector1_Impl::Connector1_Exec,
    SharedDPTest1_Seq,
    ::CCM_DDS::SharedDPTest1::CCM_Writer,
    ::CCM_DDS::SharedDPTest1::CCM_Updater,
    ::CCM_DDS::SharedDPTest1::CCM_Getter,
    ::CCM_DDS::SharedDPTest1::CCM_Reader,
    ::SharedDP_Connector1::CCM_Connector1_Context,
    ::CCM_DDS::SharedDPTest1::Listener,
    ::CCM_DDS::SharedDPTest1::StateListener,
    ::CCM_DDS::ConnectorStatusListener> SharedDPTest1_Connector_Traits;

  class SHAREDDP_CONNECTOR1_EXEC_Export Connector1_exec_i :
    public DDS_Event_Connector_T <SharedDPTest1_DDS_Traits, SharedDPTest1_Connector_Traits>
  {
  public:
    Connector1_exec_i (void);
    virtual ~Connector1_exec_i (void);
  };

  extern "C" SHAREDDP_CONNECTOR1_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_SharedDP_Connector1_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* CONNECTOR1_EXEC_H_ */

