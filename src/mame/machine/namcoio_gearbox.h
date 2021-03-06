// license:BSD-3-Clause
// copyright-holders:Angelo Salese
/***************************************************************************

	Namco 6-speed Gearbox device

***************************************************************************/

#pragma once

#ifndef __NAMCOIO_GEARBOXDEV_H__
#define __NAMCOIO_GEARBOXDEV_H__



//**************************************************************************
//  INTERFACE CONFIGURATION MACROS
//**************************************************************************

#define MCFG_NAMCOIO_GEARBOX_ADD(_tag) \
	MCFG_DEVICE_ADD(_tag, NAMCOIO_GEARBOX, 0)

//**************************************************************************
//  TYPE DEFINITIONS
//**************************************************************************

// ======================> namcoio_gearbox_device

class namcoio_gearbox_device : public device_t
{
public:
	// construction/destruction
	namcoio_gearbox_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock);

	// I/O operations
	DECLARE_CUSTOM_INPUT_MEMBER( in_r );
	DECLARE_READ_LINE_MEMBER( clutch_r );
	uint8_t m_gearbox_state;
	virtual ioport_constructor device_input_ports() const override;

protected:
	// device-level overrides
//  virtual void device_validity_check(validity_checker &valid) const;
	virtual void device_start() override;
	virtual void device_reset() override;
};


// device type definition
extern const device_type NAMCOIO_GEARBOX;



//**************************************************************************
//  GLOBAL VARIABLES
//**************************************************************************



#endif
