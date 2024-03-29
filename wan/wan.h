/*
 * wan.h
 *
 *  Created on: May 7, 2019
 *      Author: wkr1u18
 */

#ifndef WAN_WAN_H_
#define WAN_WAN_H_
#include "lorabase.h"
#include "oslmic.h"

void init_wan();
void build_frame(uint8_t *frame, uint32_t devaddr, uint8_t port_number, uint8_t * data, uint8_t dlen, uint8_t * nwkKey, uint8_t * artKey);

#endif /* WAN_WAN_H_ */
