#ifndef RTT_CHANNELS_H
#define RTT_CHANNELS_H

#include <string>
#include <map>
#include "Channel.h"

namespace proto {

    enum ChannelType {
        UNDEFINED_CHANNEL,
        GEOMETRY_CHANNEL,
        REFEREE_CHANNEL,
        WORLD_CHANNEL,
        ROBOT_COMMANDS_PRIMARY_CHANNEL,
        ROBOT_COMMANDS_SECONDARY_CHANNEL,
        FEEDBACK_PRIMARY_CHANNEL,
        FEEDBACK_SECONDARY_CHANNEL,
        SETTINGS_PRIMARY_CHANNEL,
        SETTINGS_SECONDARY_CHANNEL,
        AI_SETTINGS_RECEIVE,
        AI_DRAW_SEND,
        INTERFACE_SETTINGS_SEND,
        INTERFACE_DRAW_RECEIVE
    };

    extern const std::map<ChannelType, Channel> CHANNELS;
}
#endif //RTT_CHANNELS_H
