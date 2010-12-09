// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/
#ifndef CIAO_RG_LATEBINDING_RECEIVER_EXEC_QLDZYF_H_
#define CIAO_RG_LATEBINDING_RECEIVER_EXEC_QLDZYF_H_

#include /**/ "ace/pre.h"

#include "RG_LateBinding_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_RG_LateBinding_Receiver_Impl
{
  class RG_LateBinding_Receiver_impl;
  class Receiver_exec_i;

  /**
   * Provider Executor Implementation Class: info_get_status_exec_i
   */

  class info_get_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_get_status_exec_i (
      ::RG_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_get_status_exec_i (void);

    //@{
    /** Operations and attributes from ::CCM_DDS::PortStatusListener. */

    virtual
    void on_requested_deadline_missed (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedDeadlineMissedStatus & status);

    virtual
    void on_sample_lost (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleLostStatus & status);
    //@}

  private:
    ::RG_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: info_read_status_exec_i
   */

  class info_read_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_read_status_exec_i (
      ::RG_LateBinding::CCM_Receiver_Context_ptr ctx);
    virtual ~info_read_status_exec_i (void);

    //@{
    /** Operations and attributes from ::CCM_DDS::PortStatusListener. */

    virtual
    void on_requested_deadline_missed (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedDeadlineMissedStatus & status);

    virtual
    void on_sample_lost (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleLostStatus & status);
    //@}

  private:
    ::RG_LateBinding::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: reader_start_exec_i
   */

  class reader_start_exec_i
    : public virtual ::CCM_ReaderStarter,
      public virtual ::CORBA::LocalObject
  {
  public:
    reader_start_exec_i (
      ::RG_LateBinding::CCM_Receiver_Context_ptr ctx,
      Receiver_exec_i &callback);
    virtual ~reader_start_exec_i (void);

    //@{
    /** Operations and attributes from ::ReaderStarter. */

    virtual
    void start_read (void);

    virtual
    void set_reader_properties (::CORBA::UShort nr_keys,
    ::CORBA::UShort nr_iterations);
    //@}

  private:
    ::RG_LateBinding::CCM_Receiver_Context_var ciao_context_;
    Receiver_exec_i &callback_;
  };

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  class Receiver_exec_i
    : public virtual Receiver_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Receiver_exec_i (void);
    virtual ~Receiver_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_get_status (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_read_status (void);

    virtual ::CCM_ReaderStarter_ptr
    get_start_reading (void);
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */
    void keys (::CORBA::UShort keys);
    void iterations (::CORBA::UShort iterations);

    void start_read (void);
    //@}

  private:
    ::RG_LateBinding::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_get_status_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_read_status_;
    ::CCM_ReaderStarter_var ciao_reader_start_;

    RG_LateBinding_Receiver_impl *impl_;

    //@}

    //@{
    /** User defined members. */
    ::CORBA::UShort keys_;
    ::CORBA::UShort iterations_;

    //@}

    //@{
    /** User defined private operations. */

    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_RG_LateBinding_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
