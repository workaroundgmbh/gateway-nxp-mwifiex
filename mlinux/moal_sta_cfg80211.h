/** @file moal_sta_cfg80211.h
 *
 * @brief This file contains the STA CFG80211 specific defines.
 *
 *
 * Copyright 2011-2024 NXP
 *
 * This software file (the File) is distributed by NXP
 * under the terms of the GNU General Public License Version 2, June 1991
 * (the License).  You may use, redistribute and/or modify the File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA or on the
 * worldwide web at http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 *
 */

#ifndef _MOAL_STA_CFG80211_H_
#define _MOAL_STA_CFG80211_H_

/** Convert RSSI signal strength from dBm to mBm (100*dBm) */
#define RSSI_DBM_TO_MDM(x) ((x)*100)

mlan_status woal_register_sta_cfg80211(struct net_device *dev, t_u8 bss_type);

#endif /* _MOAL_STA_CFG80211_H_ */
