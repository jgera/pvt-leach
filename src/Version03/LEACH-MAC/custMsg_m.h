//
// Generated file, do not edit! Created by opp_msgc 4.5 from custMsg.msg.
//

#ifndef _CUSTMSG_M_H_
#define _CUSTMSG_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0405
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>custMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet custMsg
 * {
 *     
 *     int sourceId;
 *     
 *     
 *     int messageId;
 *     
 *  	
 *     int ackMsgId;
 *     
 *      
 *     int senderId;
 *     
 *     
 *     int intendedReceiverId;
 *     
 *     
 *     double packetGenerateTime;
 *     
 *     double packetReachToSinkTime;
 *     
 *     
 *     bool isRelayMsg;
 *     
 *     double packetReachTime;
 *     
 *     double overheadDelay;
 *     
 *     
 * 
 * 
 * };
 * </pre>
 */
class custMsg : public ::cPacket
{
  protected:
    int sourceId_var;
    int messageId_var;
    int ackMsgId_var;
    int senderId_var;
    int intendedReceiverId_var;
    double packetGenerateTime_var;
    double packetReachToSinkTime_var;
    bool isRelayMsg_var;
    double packetReachTime_var;
    double overheadDelay_var;

  private:
    void copy(const custMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const custMsg&);

  public:
    custMsg(const char *name=NULL, int kind=0);
    custMsg(const custMsg& other);
    virtual ~custMsg();
    custMsg& operator=(const custMsg& other);
    virtual custMsg *dup() const {return new custMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSourceId() const;
    virtual void setSourceId(int sourceId);
    virtual int getMessageId() const;
    virtual void setMessageId(int messageId);
    virtual int getAckMsgId() const;
    virtual void setAckMsgId(int ackMsgId);
    virtual int getSenderId() const;
    virtual void setSenderId(int senderId);
    virtual int getIntendedReceiverId() const;
    virtual void setIntendedReceiverId(int intendedReceiverId);
    virtual double getPacketGenerateTime() const;
    virtual void setPacketGenerateTime(double packetGenerateTime);
    virtual double getPacketReachToSinkTime() const;
    virtual void setPacketReachToSinkTime(double packetReachToSinkTime);
    virtual bool getIsRelayMsg() const;
    virtual void setIsRelayMsg(bool isRelayMsg);
    virtual double getPacketReachTime() const;
    virtual void setPacketReachTime(double packetReachTime);
    virtual double getOverheadDelay() const;
    virtual void setOverheadDelay(double overheadDelay);
};

inline void doPacking(cCommBuffer *b, custMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, custMsg& obj) {obj.parsimUnpack(b);}


#endif // _CUSTMSG_M_H_