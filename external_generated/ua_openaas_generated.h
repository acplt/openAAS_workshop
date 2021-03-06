/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.AssetAdministrationShell.bsd with script /home/opcua/Downloads/openAASworkshop/external/open62541/tools/generate_datatypes.py
 * on host opcua-VirtualBox by user opcua at 2018-01-10 09:00:49 */

#ifndef UA_OPENAAS_GENERATED_H_
#define UA_OPENAAS_GENERATED_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_types.h"

#include "ua_types_generated.h"

/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_OPENAAS_COUNT 10
extern UA_EXPORT UA_DataType UA_OPENAAS[UA_OPENAAS_COUNT];

/**
 * ExpressionSemanticEnum
 * ^^^^^^^^^^^^^^^^^^^^^^
 * Specifies the semantic of the property value statement */
typedef enum {
    UA_EXPRESSIONSEMANTICENUM_ASSURANCE = 0,
    UA_EXPRESSIONSEMANTICENUM_SETTING = 1,
    UA_EXPRESSIONSEMANTICENUM_MEASUREMENT = 2,
    UA_EXPRESSIONSEMANTICENUM_REQUIREMENT = 3
} UA_ExpressionSemanticEnum;

#define UA_OPENAAS_EXPRESSIONSEMANTICENUM 0

/**
 * ExpressionLogicEnum
 * ^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_EXPRESSIONLOGICENUM_GREATER_THAN = 0,
    UA_EXPRESSIONLOGICENUM_GREATER_EQUAL = 1,
    UA_EXPRESSIONLOGICENUM_EQUAL = 2,
    UA_EXPRESSIONLOGICENUM_NOT_EQUAL = 3,
    UA_EXPRESSIONLOGICENUM_LESS_EQUAL = 4,
    UA_EXPRESSIONLOGICENUM_LESS_THAN = 5
} UA_ExpressionLogicEnum;

#define UA_OPENAAS_EXPRESSIONLOGICENUM 1

/**
 * ViewEnum
 * ^^^^^^^^
 * Kind of View */
typedef enum {
    UA_VIEWENUM_BUSINESS = 0,
    UA_VIEWENUM_CONSTRUCTION = 1,
    UA_VIEWENUM_POWER = 2,
    UA_VIEWENUM_FUNCTIONAL = 3,
    UA_VIEWENUM_LOCATION = 4,
    UA_VIEWENUM_SECURITY = 5,
    UA_VIEWENUM_NETWORK = 6,
    UA_VIEWENUM_LIFECYCLE = 7,
    UA_VIEWENUM_HUMAN = 8
} UA_ViewEnum;

#define UA_OPENAAS_VIEWENUM 2

/**
 * VisibilityEnum
 * ^^^^^^^^^^^^^^
 * Kind of Visibilty */
typedef enum {
    UA_VISIBILITYENUM_PRIVATE = 0,
    UA_VISIBILITYENUM_CONTRACT = 1,
    UA_VISIBILITYENUM_PUBLIC = 2
} UA_VisibilityEnum;

#define UA_OPENAAS_VISIBILITYENUM 3

/**
 * IdEnum
 * ^^^^^^
 * Determines which kind of Id is specified */
typedef enum {
    UA_IDENUM_URI = 0,
    UA_IDENUM_ISO = 1
} UA_IdEnum;

#define UA_OPENAAS_IDENUM 4

/**
 * Identification
 * ^^^^^^^^^^^^^^
 * Identification */
typedef struct {
    UA_String idSpec;
    UA_IdEnum idType;
} UA_Identification;

#define UA_OPENAAS_IDENTIFICATION 5

/**
 * LifeCycleEntry
 * ^^^^^^^^^^^^^^
 * LifeCycleEntry  */
typedef struct {
    UA_Identification creatingInstance;
    UA_Identification writingInstance;
    UA_DataValue data;
    UA_String subject;
    UA_String eventClass;
    UA_Int64 id;
} UA_LifeCycleEntry;

#define UA_OPENAAS_LIFECYCLEENTRY 6

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_OPENAAS_GENERATED_H_ */
