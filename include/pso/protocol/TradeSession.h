#ifndef PSO_PROTOCOL_TRADE_SESSION_H
#define PSO_PROTOCOL_TRADE_SESSION_H
typedef void (*TradeProposalHandler)(void* packet);
extern "C" TradeProposalHandler trade_proposal_state_handlers[10][8];
#endif
