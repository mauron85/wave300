/******************************************************************************

                               Copyright (c) 2012
                            Lantiq Deutschland GmbH

  For licensing information, see the file 'LICENSE' in the root folder of
  this software module.

******************************************************************************/
#ifndef __MTLK_WSSA_DRVINFO_H__
#define __MTLK_WSSA_DRVINFO_H__

#include "mhi_statistics.h"
#include "mhi_ieee_address.h"

#define MTLK_PACK_ON
#include "mtlkpack.h"

MTIDL_ID_LIST_START
  MTIDL_ID(MTLK_WSSA_DRV_CAPABILITIES_PEER,     0)
  MTIDL_ID(MTLK_WSSA_DRV_STATUS_PEER,           1)
  MTIDL_ID(MTLK_WSSA_DRV_STATUS_HW,             2)
  MTIDL_ID(MTLK_WSSA_DRV_STATUS_WLAN,           3)
  MTIDL_ID(MTLK_WSSA_DRV_EVENT_CH_SWITCH,       4)
  MTIDL_ID(MTLK_WSSA_DRV_EVENT_ASSOCIATION,     5)
  MTIDL_ID(MTLK_WSSA_DRV_EVENT_AUTHENTICATION,  6)
  MTIDL_ID(MTLK_WSSA_DRV_EVENT_DISCONNECTION,   7)
  MTIDL_ID(MTLK_WSSA_DRV_PEER_AGGREGATION,      8)
  MTIDL_ID(MTLK_WSSA_DRV_RECOVERY,              9)
  MTIDL_ID(MTLK_WSSA_DRV_DEBUG_STATUS_PEER,    10)
  MTIDL_ID(MTLK_WSSA_DRV_DEBUG_STATUS_HW,      11)
  MTIDL_ID(MTLK_WSSA_DRV_DEBUG_STATUS_WLAN,    12)
MTIDL_ID_LIST_END

MTIDL_ITEM_START(PeerAggregation, MTIDL_STATISTICS, MTIDL_PROVIDER_PEER, MTIDL_SRC_DRV, MTLK_WSSA_DRV_PEER_AGGREGATION, "Peer aggregation statistics")
  MTIDL_LONGVAL(AggrActive,               "Number of active aggregations")
  MTIDL_LONGVAL(ReordActive,              "Number of active reorderings")
  MTIDL_LONGVAL(RxAddbaReqReceived,       "Number of RX ADDBA requests received")
  MTIDL_LONGVAL(RxAddbaResPositiveSent,   "Number of RX positive ADDBA response sent")
  MTIDL_LONGVAL(RxAddbaResNegativeSent,   "Number of RX negative ADDBA response sent")
  MTIDL_LONGVAL(RxAddbaResCfmdSuccess,    "Number of RX ADDBA response confirmed")
  MTIDL_LONGVAL(RxAddbaResCfmdFail,       "Number of RX ADDBA response confirmation failed")
  MTIDL_LONGVAL(RxAddbaResNotCfmd,        "Number of RX not confirmed ADDBA responses")
  MTIDL_LONGVAL(RxAddbaResReached,        "Number of RX ADDBA response reached")
  MTIDL_LONGVAL(RxAddbaResRetransmissions,"Number of RX ADDBA response retransmissions")
  MTIDL_LONGVAL(RxAddbaResLost,           "Number of RX ADDBA response lost")
  MTIDL_LONGVAL(RxBarWithoutReordering,   "Number of RX BAR received with closed reordering")
  MTIDL_LONGVAL(RxPktWithoutReordering,   "Number of RX packets received with closed reordering")
  MTIDL_LONGVAL(RxDelbaReqRcv,            "Number of RX DELBA request received")
  MTIDL_LONGVAL(RxDelbaSentByTimeout,     "Number of RX DELBA request sent by timeout")
  MTIDL_LONGVAL(RxDelbaReqSent,           "Number of RX DELBA request sent")
  MTIDL_LONGVAL(RxDelbaReqCfmdSuccess,    "Number of RX DELBA request confirmed")
  MTIDL_LONGVAL(RxDelbaReqCfmdFail,       "Number of RX DELBA request confirmation failed")
  MTIDL_LONGVAL(RxDelbaReqNotCfmd,        "Number of RX not confirmed DELBA requests")
  MTIDL_LONGVAL(RxDelbaReqReached,        "Number of RX DELBA request reached")
  MTIDL_LONGVAL(RxDelbaReqRetransmissions,"Number of RX DELBA request retransmissions")
  MTIDL_LONGVAL(RxDelbaReqLost,           "Number of RX DELBA request lost")
  MTIDL_LONGVAL(TxAckOnBarDetected,       "Number of TX ACK on BAR received")
  MTIDL_LONGVAL(TxAddbaResRcvNegative,    "Number of TX negative ADDBA response received")
  MTIDL_LONGVAL(TxAddbaResRcvPositive,    "Number of TX positive ADDBA response received")
  MTIDL_LONGVAL(TxAddbaResTimeout,        "Number of TX missed ADDBA responses")
  MTIDL_LONGVAL(TxAddbaReqSent,           "Number of TX ADDBA request sent")
  MTIDL_LONGVAL(TxAddbaReqCfmdSuccess,    "Number of TX ADDBA request confirmed")
  MTIDL_LONGVAL(TxAddbaReqCfmdFail,       "Number of TX ADDBA request confirmation failed")
  MTIDL_LONGVAL(TxAddbaReqNotCfmd,        "Number of TX not confirmed ADDBA requests")
  MTIDL_LONGVAL(TxDelbaReqRcv,            "Number of TX DELBA request received")
  MTIDL_LONGVAL(TxDelbaReqSent,           "Number of TX DELBA request sent")
  MTIDL_LONGVAL(TxDelbaReqCfmdSuccess,    "Number of TX DELBA request confirmed")
  MTIDL_LONGVAL(TxDelbaReqCfmdFail,       "Number of TX DELBA request confirmation failed")
  MTIDL_LONGVAL(TxDelbaReqNotCfmd,        "Number of TX not confirmed DELBA requests")
  MTIDL_LONGVAL(TxDelbaReqReached,        "Number of TX DELBA request reached")
  MTIDL_LONGVAL(TxDelbaReqRetransmissions,"Number of TX DELBA request retransmissions")
  MTIDL_LONGVAL(TxDelbaReqLost,           "Number of TX DELBA request lost")
  MTIDL_LONGVAL(TxOpenAggrSent,           "Number of TX OPEN aggregation sent")
  MTIDL_LONGVAL(TxOpenAggrCfmdSuccess,    "Number of TX OPEN aggregation confirmed")
  MTIDL_LONGVAL(TxOpenAggrCfmdFail,       "Number of TX OPEN aggregation confirmation failed")
  MTIDL_LONGVAL(TxOpenAggrNotCfmd,        "Number of TX not confirmed OPEN aggregations")
  MTIDL_LONGVAL(TxCloseAggrSent,          "Number of TX CLOSE aggregation sent")
  MTIDL_LONGVAL(TxCloseAggrCfmdSuccess,   "Number of TX CLOSE aggregation confirmed")
  MTIDL_LONGVAL(TxCloseAggrCfmdFail,      "Number of TX CLOSE aggregation confirmation fail")
  MTIDL_LONGVAL(TxCloseAggrNotCfmd,       "Number of TX not confirmed CLOSE aggregations")
MTIDL_ITEM_END(mtlk_wssa_drv_peer_aggregation_t)

/* HW minimal statistic */
MTIDL_ITEM_START(HWFlowStatus, MTIDL_STATISTICS, MTIDL_PROVIDER_HW, MTIDL_SRC_DRV, MTLK_WSSA_DRV_STATUS_HW, "Hardware packets flow statistics")
  MTIDL_LONGVAL(RxPacketsSucceeded,                     "Number of packets received")
  MTIDL_LONGVAL(RxBytesSucceeded,                       "Number of bytes received")
  MTIDL_LONGVAL(TxPacketsSucceeded,                     "Number of packets transmitted")
  MTIDL_LONGVAL(TxBytesSucceeded,                       "Number of bytes sent successfully")
  MTIDL_LONGVAL(UnicastPacketsSent,                     "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                 "Number of unicast packets received")
  MTIDL_LONGVAL(MulticastPacketsSent,                   "Number of multicast packets transmitted")
  MTIDL_LONGVAL(MulticastPacketsReceived,               "Number of multicast packets received")
  MTIDL_LONGVAL(BroadcastPacketsSent,                   "Number of broadcast packets transmitted")
  MTIDL_LONGVAL(BroadcastPacketsReceived,               "Number of broadcast packets received")

  MTIDL_LONGVAL(txmm_sent,                              "Number of management messages sent")
  MTIDL_LONGVAL(txmm_cfmd,                              "Number of management messages confirmed")
  MTIDL_LONGVAL(txmm_peak,                              "Peak number of management messages sent simultaneously")
  MTIDL_LONGVAL(txdm_sent,                              "Number of debug messages sent")
  MTIDL_LONGVAL(txdm_cfmd,                              "Number of debug messages confirmed")
  MTIDL_LONGVAL(txdm_peak,                              "Peak number of debug messages sent simultaneously")
MTIDL_ITEM_END(mtlk_wssa_drv_hw_stats_t)

MTIDL_ITEM_START(RecoveryStats, MTIDL_STATISTICS, MTIDL_PROVIDER_HW, MTIDL_SRC_DRV, MTLK_WSSA_DRV_RECOVERY, "Recovery statistics")
  MTIDL_LONGVAL(FastRcvryProcessed,                     "Number of FAST recovery processed successfully")
  MTIDL_LONGVAL(FullRcvryProcessed,                     "Number of FULL recovery processed successfully")
  MTIDL_LONGVAL(FastRcvryFailed,                        "Number of FAST recovery failed")
  MTIDL_LONGVAL(FullRcvryFailed,                        "Number of FULL recovery failed")
MTIDL_ITEM_END(mtlk_wssa_drv_recovery_stats_t)

/* PEER minimal statistic */
MTIDL_ITEM_START(PeerFlowStatus, MTIDL_STATISTICS, MTIDL_PROVIDER_PEER, MTIDL_SRC_DRV, MTLK_WSSA_DRV_STATUS_PEER, "Peer packets flow statistics")
  MTIDL_LONGVAL(TxBytesSucceeded,                       "Number of bytes sent successfully")
  MTIDL_LONGVAL(RxBytesSucceeded,                       "Number of bytes received")
  MTIDL_LONGVAL(TxPacketsSucceeded,                     "Number of packets transmitted")
  MTIDL_LONGVAL(RxPacketsSucceeded,                     "Number of packets received")
  MTIDL_LONGVAL(UnicastPacketsSent,                     "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                 "Number of unicast packets received")

  MTIDL_LONGFRACT(LastUplinkRate,   1,                  "Last transmit rate")
  MTIDL_LONGFRACT(LastDownlinkRate, 1,                  "Last receive rate")
  MTIDL_SLONGVAL_ARRAY(ShortTermRSSIAverage, 3,         "Short-term RSSI average per antenna")
MTIDL_ITEM_END(mtlk_wssa_drv_peer_stats_t)

MTIDL_BITFIELD_START
  MTIDL_BITFIELD_ENTRY(MTLK_WSSA_11A_SUPPORTED, 0, "802.11a")
  MTIDL_BITFIELD_ENTRY(MTLK_WSSA_11B_SUPPORTED, 1, "802.11b")
  MTIDL_BITFIELD_ENTRY(MTLK_WSSA_11G_SUPPORTED, 2, "802.11g")
  MTIDL_BITFIELD_ENTRY(MTLK_WSSA_11N_SUPPORTED, 3, "802.11n")
MTIDL_BITFIELD_END(mtlk_wssa_net_modes_supported_e)

MTIDL_ITEM_START(PeerCapabilities, MTIDL_INFORMATION, MTIDL_PROVIDER_PEER, MTIDL_SRC_DRV, MTLK_WSSA_DRV_CAPABILITIES_PEER, "Peer capabilities")
  MTIDL_BITFIELD( NetModesSupported, mtlk_wssa_net_modes_supported_e, "Supported network modes")
  MTIDL_FLAG( WMMSupported, "WMM is supported")
  MTIDL_FLAG( CBSupported, "Channel bonding supported")
  MTIDL_FLAG( SGI20Supported, "SGI20 supported")
  MTIDL_FLAG( SGI40Supported, "SGI40 supported")
  MTIDL_FLAG( STBCSupported, "STBC supported")
  MTIDL_FLAG( LDPCSupported, "LDPC supported")
  MTIDL_FLAG( BFSupported, "Explicit beam forming supported")
  MTIDL_ENUM( Vendor, mtlk_wssa_peer_vendor_t,  "Vendor")
  MTIDL_FLAG( LQLDPCEnabled, "Prorprietary Lantiq LDPC enabled")
  MTIDL_LONGVAL( MIMOConfigTX, "Max TX spatial streams")
  MTIDL_LONGVAL( MIMOConfigRX, "Max RX spatial streams")
  MTIDL_LONGVAL( AMPDUMaxLengthExp, "Maximum A-MPDU Length Exponent")
  MTIDL_LONGVAL( AMPDUMinStartSpacing, "Minimum MPDU Start Spacing")
  MTIDL_TIMESTAMP( AssociationTimestamp, "Timestamp of station association")
MTIDL_ITEM_END(mtlk_wssa_drv_peer_capabilities_t)

/* WLAN minimal statistic */
MTIDL_ITEM_START(WLANFlowStatus, MTIDL_STATISTICS, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_STATUS_WLAN, "WLAN packets flow statistics")
  MTIDL_LONGVAL(TxPacketsSucceeded,                               "Number of packets transmitted")
  MTIDL_LONGVAL(RxPacketsSucceeded,                               "Number of packets received")
  MTIDL_LONGVAL(TxBytesSucceeded,                                 "Number of bytes sent successfully")
  MTIDL_LONGVAL(RxBytesSucceeded,                                 "Number of bytes received")
  MTIDL_LONGVAL(UnicastPacketsSent,                               "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                           "Number of unicast packets received")
  MTIDL_LONGVAL(MulticastPacketsSent,                             "Number of multicast packets transmitted")
  MTIDL_LONGVAL(MulticastPacketsReceived,                         "Number of multicast packets received")
  MTIDL_LONGVAL(BroadcastPacketsSent,                             "Number of broadcast packets transmitted")
  MTIDL_LONGVAL(BroadcastPacketsReceived,                         "Number of broadcast packets received")
MTIDL_ITEM_END(mtlk_wssa_drv_wlan_stats_t)

MTIDL_ENUM_START
  MTIDL_ENUM_ENTRY(WSSA_SWR_UNKNOWN,          0,  "Unknown")
  MTIDL_ENUM_ENTRY(WSSA_SWR_OPTIMIZATION,     1,  "Channel optimization")
  MTIDL_ENUM_ENTRY(WSSA_SWR_RADAR,            2,  "Radar detection")
  MTIDL_ENUM_ENTRY(WSSA_SWR_USER,             3,  "User command")
  MTIDL_ENUM_ENTRY(WSSA_20_40_COEXISTENCE,    4,  "20/40 coexistence")
  MTIDL_ENUM_ENTRY(WSSA_SWR_INTERF,           5,  "Interference detection")
  MTIDL_ENUM_ENTRY(WSSA_SWR_AP_SWITCHED,      6,  "AP is switched")
MTIDL_ENUM_END(mtlk_wssa_channel_switch_reasons_t)

MTIDL_ITEM_START(ChannelSwitchEvent, MTIDL_EVENT, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_EVENT_CH_SWITCH, "Channel switch performed")
  MTIDL_LONGVAL(primary_channel,                          "Primary channel")
  MTIDL_LONGVAL(secondary_channel,                        "Secondary channel")
  MTIDL_ENUM(reason, mtlk_wssa_channel_switch_reasons_t,  "Switch reason")
MTIDL_ITEM_END(mtlk_channel_switched_event_t)

MTIDL_ITEM_START(AssotiationEvent, MTIDL_EVENT, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_EVENT_ASSOCIATION, "Peer association event")
  MTIDL_MACADDR(mac_addr, "Peer MAC address")
  MTIDL_ENUM(status, mtlk_wssa_connection_status_t, "Association status")
MTIDL_ITEM_END(mtlk_association_event_t)

MTIDL_ITEM_START(AuthenticationEvent, MTIDL_EVENT, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_EVENT_AUTHENTICATION, "Peer authentication event")
  MTIDL_MACADDR(mac_addr,                                 "Peer MAC address")
  MTIDL_ENUM(auth_type, mtlk_wssa_authentication_type_t,  "802.11 authentication type")
  MTIDL_ENUM(status, mtlk_wssa_connection_status_t,       "Authentication status")
MTIDL_ITEM_END(mtlk_authentication_event_t)

MTIDL_ENUM_START
  MTIDL_ENUM_ENTRY(MTLK_DI_STA, 0, "Station")
  MTIDL_ENUM_ENTRY(MTLK_DI_AP,  1, "Access Point")
MTIDL_ENUM_END(mtlk_wssa_initiators_t)

MTIDL_ITEM_START(DisconnectionEvent, MTIDL_EVENT, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_EVENT_DISCONNECTION, "Peer disconnection event")
  MTIDL_MACADDR(mac_addr,                                           "Peer MAC address")
  MTIDL_ENUM(initiator, mtlk_wssa_initiators_t,                     "Initiated by")
  MTIDL_ENUM(reason, mtlk_wssa_connection_status_t,                 "Disconnect reason")
  MTIDL_ITEM(mtlk_wssa_drv_peer_capabilities_t, peer_capabilities,  "Additional info")
  MTIDL_ITEM(mtlk_wssa_drv_peer_stats_t, peer_stats,                "Additional info")
MTIDL_ITEM_END(mtlk_disconnection_event_t)


/* HW Debug (full) statistic */
MTIDL_ITEM_START(HWFlowStatusDebug, MTIDL_STATISTICS, MTIDL_PROVIDER_HW, MTIDL_SRC_DRV, MTLK_WSSA_DRV_DEBUG_STATUS_HW, "Hardware flow (with DEBUG driver only)")
  MTIDL_LONGVAL(RxPacketsSucceeded,                     "Number of packets received")
  MTIDL_LONGVAL(RxBytesSucceeded,                       "Number of bytes received")
  MTIDL_LONGVAL(TxPacketsSucceeded,                     "Number of packets transmitted")
  MTIDL_LONGVAL(TxBytesSucceeded,                       "Number of bytes sent successfully")
  MTIDL_LONGVAL(RxPackets802_1x,                        "Number of 802_1X packets received")
  MTIDL_LONGVAL(TxPackets802_1x,                        "Number of 802_1X packets transmitted")
  MTIDL_LONGVAL(FwdRxPackets,                           "Number of packets received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(FwdRxBytes,                             "Number of bytes received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(UnicastPacketsSent,                     "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                 "Number of unicast packets received")
  MTIDL_LONGVAL(MulticastPacketsSent,                   "Number of multicast packets transmitted")
  MTIDL_LONGVAL(MulticastPacketsReceived,               "Number of multicast packets received")
  MTIDL_LONGVAL(MulticastBytesSent,                     "Number of multicast bytes transmitted")
  MTIDL_LONGVAL(MulticastBytesReceived,                 "Number of multicast bytes received")
  MTIDL_LONGVAL(BroadcastPacketsSent,                   "Number of broadcast packets transmitted")
  MTIDL_LONGVAL(BroadcastPacketsReceived,               "Number of broadcast packets received")
  MTIDL_LONGVAL(BroadcastBytesSent,                     "Number of broadcast bytes transmitted")
  MTIDL_LONGVAL(BroadcastBytesReceived,                 "Number of broadcast bytes received")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvTooOld,            "Too old RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvDuplicate,         "Duplicate RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(PairwiseMICFailurePackets,              "Number of pairwise MIC failure packets")
  MTIDL_LONGVAL(GroupMICFailurePackets,                 "Number of group MIC failure packets")
  MTIDL_LONGVAL(UnicastReplayedPackets,                 "Number of unicast replayed packets")
  MTIDL_LONGVAL(MulticastReplayedPackets,               "Number of multicast/broadcast replayed packets")
  MTIDL_LONGVAL(DATFramesReceived,                      "Number of data frames received")
  MTIDL_LONGVAL(CTLFramesReceived,                      "Number of control frames received")
  MTIDL_LONGVAL(MANFramesReceived,                      "Number of management frames received")
  MTIDL_LONGVAL(txmm_sent,                              "Number of management messages sent")
  MTIDL_LONGVAL(txmm_cfmd,                              "Number of management messages confirmed")
  MTIDL_LONGVAL(txmm_peak,                              "Peak number of management messages sent simultaneously")
  MTIDL_LONGVAL(txdm_sent,                              "Number of debug messages sent")
  MTIDL_LONGVAL(txdm_cfmd,                              "Number of debug messages confirmed")
  MTIDL_LONGVAL(txdm_peak,                              "Peak number of debug messages sent simultaneously")
  MTIDL_LONGVAL(FreeTxMSDUs,                            "Number of free TX MSDUs")
  MTIDL_LONGVAL(TxMSDUsUsagePeak,                       "TX MSDUs usage peak")
  MTIDL_LONGVAL(FWLoggerPacketsProcessed,               "FW logger packets processed")
  MTIDL_LONGVAL(FWLoggerPacketsDropped,                 "FW logger packets dropped")
  MTIDL_FLAG(BISTCheckPassed,                           "HW device passed BIST check successfully")
  MTIDL_LONGVAL(ISRsTotal,                              "Number of interrupts received")
  MTIDL_LONGVAL(ISRsForeign,                            "Number of foreign interrupts received")
  MTIDL_LONGVAL(ISRsNotPending,                         "Number of non-pending interrupts received")
  MTIDL_LONGVAL(ISRsHalted,                             "Number of interrupts received while halted")
  MTIDL_LONGVAL(ISRsInit,                               "Number of interrupts received while in init")
  MTIDL_LONGVAL(ISRsToDPC,                              "Number of DPCs scheduled by ISR") 
  MTIDL_LONGVAL(ISRsUnknown,                            "Number of ISRs of an unknown type")
  MTIDL_LONGVAL(PostISRDPCs,                            "Number of post-ISR DPCs received")
  MTIDL_LONGVAL(FWMsgsHandled,                          "Number of FW Messages Handled")
  MTIDL_LONGVAL(SqDPCsScheduled,                        "Number of SQ DPCs scheduled")
  MTIDL_LONGVAL(SqDPCsArrived,                          "Number of SQ DPCs arrived")
  MTIDL_LONGVAL(RxAllocFailed,                          "Number of RX Buff allocations failed")
  MTIDL_LONGVAL(RxReAllocFailed,                        "Number of RX Buff re-allocations failed")
  MTIDL_LONGVAL(RxReAllocated,                          "Number of RX Buff re-allocated")
  MTIDL_ITEM(mtlk_wssa_drv_peer_aggregation_t, Aggregation, "Aggregation info")
MTIDL_ITEM_END(mtlk_wssa_drv_debug_hw_stats_t)

/* WLAN Debug (full) statistic */
MTIDL_ITEM_START(WLANFlowStatusDebug, MTIDL_STATISTICS, MTIDL_PROVIDER_WLAN, MTIDL_SRC_DRV, MTLK_WSSA_DRV_DEBUG_STATUS_WLAN, "WLAN flow (with DEBUG driver only)")
  MTIDL_LONGVAL(TxPacketsSucceeded,                               "Number of packets transmitted")
  MTIDL_LONGVAL(RxPacketsSucceeded,                               "Number of packets received")
  MTIDL_LONGVAL(TxBytesSucceeded,                                 "Number of bytes sent successfully")
  MTIDL_LONGVAL(RxBytesSucceeded,                                 "Number of bytes received")
  MTIDL_LONGVAL(RxPackets802_1x,                                  "Number of 802_1X packets received")
  MTIDL_LONGVAL(TxPackets802_1x,                                  "Number of 802_1X packets transmitted")
  MTIDL_LONGVAL(FwdRxPackets,                                     "Number of packets received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(FwdRxBytes,                                       "Number of bytes received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(UnicastPacketsSent,                               "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                           "Number of unicast packets received")
  MTIDL_LONGVAL(MulticastPacketsSent,                             "Number of multicast packets transmitted")
  MTIDL_LONGVAL(MulticastPacketsReceived,                         "Number of multicast packets received")
  MTIDL_LONGVAL(MulticastBytesSent,                               "Number of multicast bytes transmitted")
  MTIDL_LONGVAL(MulticastBytesReceived,                           "Number of multicast bytes received")
  MTIDL_LONGVAL(BroadcastPacketsSent,                             "Number of broadcast packets transmitted")
  MTIDL_LONGVAL(BroadcastPacketsReceived,                         "Number of broadcast packets received")
  MTIDL_LONGVAL(BroadcastBytesSent,                               "Number of broadcast bytes transmitted")
  MTIDL_LONGVAL(BroadcastBytesReceived,                           "Number of broadcast bytes received")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvTooOld,                      "Too old RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvDuplicate,                   "Duplicate RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvNoResources,                 "TX packets discarded due to system resources exhausted")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvSQOverflow,                  "TX packets discarded due to driver queues overflow")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvEAPOLFilter,                 "TX packets discarded by EAPOL filter")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvDropAllFilter,               "TX packets discarded by drop all filter")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvTXQueueOverflow,             "TX packets discarded due to HW transmit queue overflow")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvNoPeers,                     "TX packets discarded by driver due to no peers were connected")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvACM,                         "TX packets discarded by driver ACM facility")
  MTIDL_LONGVAL(TxPacketsDiscardedEapolCloned,                    "TX EAPOL packets arrived in MAC cloning mode discarded")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvUnknownDestinationDirected,  "Directed TX packets with unknown destination discarded")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvUnknownDestinationMcast,     "Multicast TX packets with unknown destination discarded")
  MTIDL_LONGVAL(PairwiseMICFailurePackets,                        "Number of pairwise MIC failure packets")
  MTIDL_LONGVAL(GroupMICFailurePackets,                           "Number of group MIC failure packets")
  MTIDL_LONGVAL(UnicastReplayedPackets,                           "Number of unicast replayed packets")
  MTIDL_LONGVAL(MulticastReplayedPackets,                         "Number of multicast/broadcast replayed packets")
  MTIDL_LONGVAL(DATFramesReceived,                                "Number of data frames received")
  MTIDL_LONGVAL(CTLFramesReceived,                                "Number of control frames received")
  MTIDL_LONGVAL(MANFramesReceived,                                "Number of management frames received")
  MTIDL_LONGVAL(CoexElReceived,                                   "Number of coexistent elements received")
  MTIDL_LONGVAL(ScanExRequested,                                  "Number of scan exemptions received")
  MTIDL_LONGVAL(ScanExGranted,                                    "Number of scan exemptions granted")
  MTIDL_LONGVAL(ScanExGrantCancelled,                             "Number of scan exemption grants cancelled")
  MTIDL_LONGVAL(SwitchChannel20To40,                              "Number of switches between 20MHz to 40MHz")
  MTIDL_LONGVAL(SwitchChannel40To20,                              "Number of switches between 40MHz to 20MHz")
  MTIDL_LONGVAL(SwitchChannel40To40,                              "Number of switches between 40MHz to 40MHz (another pair of channels)")
  MTIDL_ITEM(mtlk_wssa_drv_peer_aggregation_t, Aggregation,       "Aggregation info")
MTIDL_ITEM_END(mtlk_wssa_drv_debug_wlan_stats_t)

/* PEER Debug (full) statistic */
MTIDL_ITEM_START(PeerFlowStatusDebug, MTIDL_STATISTICS, MTIDL_PROVIDER_PEER, MTIDL_SRC_DRV, MTLK_WSSA_DRV_DEBUG_STATUS_PEER, "Peer flow (with DEBUG driver only)")
  MTIDL_LONGVAL(TxPacketsSucceeded,                     "Number of packets transmitted")
  MTIDL_LONGVAL(RxPacketsSucceeded,                     "Number of packets received")
  MTIDL_LONGVAL(TxBytesSucceeded,                       "Number of bytes sent successfully")
  MTIDL_LONGVAL(RxBytesSucceeded,                       "Number of bytes received")
  MTIDL_LONGVAL(RxPackets802_1x,                        "Number of 802_1X packets received")
  MTIDL_LONGVAL(TxPackets802_1x,                        "Number of 802_1X packets transmitted")
  MTIDL_LONGVAL(FwdRxPackets,                           "Number of packets received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(FwdRxBytes,                             "Number of bytes received that should be forwarded to one or more STAs")
  MTIDL_LONGVAL(UnicastPacketsSent,                     "Number of unicast packets transmitted")
  MTIDL_LONGVAL(UnicastPacketsReceived,                 "Number of unicast packets received")
  MTIDL_LONGVAL(DiscardedTxPacketsFw,                   "Number of TX packets discarded by FW")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvNoResources,       "TX packets discarded due to system resources exhausted")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvSQOverflow,        "TX packets discarded due to driver queues overflow")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvEAPOLFilter,       "TX packets discarded by EAPOL filter")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvDropAllFilter,     "TX packets discarded by drop all filter")
  MTIDL_LONGVAL(TxPacketsDiscardedDrvTXQueueOverflow,   "TX packets discarded due to HW transmit queue overflow")
  MTIDL_LONGVAL(TxPacketsDiscardedACM,                  "TX packets discarded by driver ACM facility")
  MTIDL_LONGVAL(TxPacketsDiscardedEAPOLCloned,          "TX EAPOL packets arrived in MAC cloning mode discarded")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvTooOld,            "Too old RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(RxPacketsDiscardedDrvDuplicate,         "Duplicate RX packets dropped by reordering mechanism")
  MTIDL_LONGVAL(PSModeEntrances,                        "Number of time peer entered legacy power save mode")
  MTIDL_LONGFRACT(LastUplinkRate,   1,                  "Last transmit rate")
  MTIDL_LONGFRACT(LastDownlinkRate, 1,                  "Last receive rate")
  MTIDL_LONGVAL(LastActivityTimestamp,                  "How many msecs ago was active")
  MTIDL_SLONGVAL_ARRAY(ShortTermRSSIAverage, 3,         "Short-term RSSI average per antenna")
  MTIDL_SLONGVAL_ARRAY(LongTermRSSIAverage, 3,          "Long-term RSSI average per antenna")
  MTIDL_LONGVAL(ShortTermTXAverage,                     "Short-term TX throughput average")
  MTIDL_LONGVAL(LongTermTXAverage,                      "Long-term TX throughput average")
  MTIDL_LONGVAL(ShortTermRXAverage,                     "Short-term RX throughput average")
  MTIDL_LONGVAL(LongTermRXAverage,                      "Long-term RX throughput average")
  MTIDL_LONGVAL(RetransmissionsNumberShort,             "Short-term retransmissions counter")
MTIDL_ITEM_END(mtlk_wssa_drv_debug_peer_stats_t)


#define MTLK_PACK_OFF
#include "mtlkpack.h"

#define   MTLK_IDEFS_ON
#include "mtlkidefs.h"

#define   MTLK_IDEFS_OFF
#include "mtlkidefs.h"

#endif /* __MTLK_WSSA_DRVINFO_H__ */
