#pragma once

/* GSM TS 04.80  definitions (Supplementary Services Specification, Formats and Coding) */

/* Section 3.4 */
#define GSM0480_MTYPE_RELEASE_COMPLETE	0x2A
#define GSM0480_MTYPE_FACILITY			0x3A
#define GSM0480_MTYPE_REGISTER			0x3B

/* Section 3.5 */
#define GSM0480_IE_FACILITY			0x1C
#define GSM0480_IE_SS_VERSION			0x7F

/* Section 3.6.2 */
#define GSM0480_CTYPE_INVOKE			0xA1
#define GSM0480_CTYPE_RETURN_RESULT		0xA2
#define GSM0480_CTYPE_RETURN_ERROR		0xA3
#define GSM0480_CTYPE_REJECT			0xA4

/* Section 3.6.3 */
#define GSM0480_COMPIDTAG_INVOKE_ID		0x02
#define GSM0480_COMPIDTAG_LINKED_ID		0x80

/* Section 3.6.4 */
#define GSM0480_OPERATION_CODE			0x02

/* Section 3.6.5 */
#define GSM_0480_SEQUENCE_TAG			0x30
#define GSM_0480_SET_TAG			0x31

/* Section 3.6.6 */
#define GSM_0480_ERROR_CODE_TAG			0x02

/* Section 3.6.7 */
/* Table 3.13 */
#define GSM_0480_PROBLEM_CODE_TAG_GENERAL	0x80
#define GSM_0480_PROBLEM_CODE_TAG_INVOKE	0x81
#define GSM_0480_PROBLEM_CODE_TAG_RETURN_RESULT	0x82
#define GSM_0480_PROBLEM_CODE_TAG_RETURN_ERROR	0x83

/* Table 3.14 */
#define GSM_0480_GEN_PROB_CODE_UNRECOGNISED	0x00
#define GSM_0480_GEN_PROB_CODE_MISTYPED		0x01
#define GSM_0480_GEN_PROB_CODE_BAD_STRUCTURE	0x02

/* Table 3.15 */
#define GSM_0480_INVOKE_PROB_CODE_DUPLICATE_INVOKE_ID		0x00
#define GSM_0480_INVOKE_PROB_CODE_UNRECOGNISED_OPERATION	0x01
#define GSM_0480_INVOKE_PROB_CODE_MISTYPED_PARAMETER		0x02
#define GSM_0480_INVOKE_PROB_CODE_RESOURCE_LIMITATION		0x03
#define GSM_0480_INVOKE_PROB_CODE_INITIATING_RELEASE		0x04
#define GSM_0480_INVOKE_PROB_CODE_UNRECOGNISED_LINKED_ID	0x05
#define GSM_0480_INVOKE_PROB_CODE_UNEXPECTED_LINKED_RESPONSE	0x06
#define GSM_0480_INVOKE_PROB_CODE_UNEXPECTED_LINKED_OPERATION	0x07

/* Table 3.16 */
#define GSM_0480_RESULT_PROB_CODE_UNRECOGNISED_INVOKE_ID	0x00
#define GSM_0480_RESULT_PROB_CODE_RETURN_RESULT_UNEXPECTED	0x01
#define GSM_0480_RESULT_PROB_CODE_MISTYPED_PARAMETER		0x02

/* Table 3.17 */
#define GSM_0480_ERROR_PROB_CODE_UNRECOGNISED_INVOKE_ID		0x00
#define GSM_0480_ERROR_PROB_CODE_RETURN_ERROR_UNEXPECTED	0x01
#define GSM_0480_ERROR_PROB_CODE_UNRECOGNISED_ERROR		0x02
#define GSM_0480_ERROR_PROB_CODE_UNEXPECTED_ERROR		0x03
#define GSM_0480_ERROR_PROB_CODE_MISTYPED_PARAMETER		0x04

/* Section 4.5 */
#define GSM0480_OP_CODE_REGISTER_SS		0x0A
#define GSM0480_OP_CODE_ERASE_SS		0x0B
#define GSM0480_OP_CODE_ACTIVATE_SS		0x0C
#define GSM0480_OP_CODE_DEACTIVATE_SS		0x0D
#define GSM0480_OP_CODE_INTERROGATE_SS		0x0E
#define GSM0480_OP_CODE_NOTIFY_SS		0x10
#define GSM0480_OP_CODE_REGISTER_PASSWORD	0x11
#define GSM0480_OP_CODE_GET_PASSWORD		0x12
#define GSM0480_OP_CODE_PROCESS_USS_DATA	0x13
#define GSM0480_OP_CODE_FORWARD_CHECK_SS_IND	0x26
#define GSM0480_OP_CODE_PROCESS_USS_REQ		0x3B
#define GSM0480_OP_CODE_USS_REQUEST		0x3C
#define GSM0480_OP_CODE_USS_NOTIFY		0x3D
#define GSM0480_OP_CODE_FORWARD_CUG_INFO	0x78
#define GSM0480_OP_CODE_SPLIT_MPTY		0x79
#define GSM0480_OP_CODE_RETRIEVE_MPTY		0x7A
#define GSM0480_OP_CODE_HOLD_MPTY		0x7B
#define GSM0480_OP_CODE_BUILD_MPTY		0x7C
#define GSM0480_OP_CODE_FORWARD_CHARGE_ADVICE	0x7D

#define GSM0480_ERR_CODE_UNKNOWN_SUBSCRIBER			0x01
#define GSM0480_ERR_CODE_ILLEGAL_SUBSCRIBER			0x09
#define GSM0480_ERR_CODE_BEARER_SERVICE_NOT_PROVISIONED		0x0A
#define GSM0480_ERR_CODE_TELESERVICE_NOT_PROVISIONED		0x0B
#define GSM0480_ERR_CODE_ILLEGAL_EQUIPMENT			0x0C
#define GSM0480_ERR_CODE_CALL_BARRED				0x0D
#define GSM0480_ERR_CODE_ILLEGAL_SS_OPERATION			0x10
#define GSM0480_ERR_CODE_SS_ERROR_STATUS			0x11
#define GSM0480_ERR_CODE_SS_NOT_AVAILABLE			0x12
#define GSM0480_ERR_CODE_SS_SUBSCRIPTION_VIOLATION		0x13
#define GSM0480_ERR_CODE_SS_INCOMPATIBILITY			0x14
#define GSM0480_ERR_CODE_FACILITY_NOT_SUPPORTED			0x15
#define GSM0480_ERR_CODE_ABSENT_SUBSCRIBER			0x1B
#define GSM0480_ERR_CODE_SYSTEM_FAILURE				0x22
#define GSM0480_ERR_CODE_DATA_MISSING				0x23
#define GSM0480_ERR_CODE_UNEXPECTED_DATA_VALUE			0x24
#define GSM0480_ERR_CODE_PW_REGISTRATION_FAILURE		0x25
#define GSM0480_ERR_CODE_NEGATIVE_PW_CHECK			0x26
#define GSM0480_ERR_CODE_NUM_PW_ATTEMPTS_VIOLATION		0x2B
#define GSM0480_ERR_CODE_UNKNOWN_ALPHABET			0x47
#define GSM0480_ERR_CODE_USSD_BUSY				0x48
#define GSM0480_ERR_CODE_MAX_MPTY_PARTICIPANTS			0x7E
#define GSM0480_ERR_CODE_RESOURCES_NOT_AVAILABLE		0x7F

/* ASN.1 type-tags */
#define ASN1_BOOLEAN_TAG		0x01
#define ASN1_INTEGER_TAG		0x02
#define ASN1_BIT_STRING_TAG		0x03
#define ASN1_OCTET_STRING_TAG		0x04
#define ASN1_NULL_TYPE_TAG		0x05
#define ASN1_OBJECT_ID_TAG		0x06
#define ASN1_UTF8_STRING_TAG		0x0C
#define ASN1_PRINTABLE_STRING_TAG	0x13
#define ASN1_IA5_STRING_TAG		0x16
#define ASN1_UNICODE_STRING_TAG		0x1E
