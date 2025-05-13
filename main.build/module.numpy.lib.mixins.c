/* Generated code for Python module 'numpy$lib$mixins'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$lib$mixins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$mixins;
PyDictObject *moduledict_numpy$lib$mixins;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[146];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[146];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("numpy.lib.mixins"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 146; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$mixins(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 146; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_numpy$lib$mixins_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[145]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[145])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[145], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[145])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[145], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[145]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[145]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[145]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[16]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[16])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[16], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[16])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[16], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[16]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[16]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[16]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__disables_array_ufunc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[7]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[7]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[7]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[7]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__inplace_binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[18])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[18])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[18]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__numeric_methods(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[34]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[34])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[34])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[34]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[34]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[34]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__reflected_binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[17])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[17])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[17]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$__unary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[35]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[35])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[35])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[35], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[35]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[35]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[35]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins_$$_um(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[31]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[31])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[31], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[31])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[31], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[31]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[31]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[31]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_435e7696c4330ccb8470be2c33c77785;
static PyCodeObject *code_objects_b2c20fe99ccde0ebdef921f1e53c8c20;
static PyCodeObject *code_objects_7ca8d0c9c75a8789ecf461725c723a6a;
static PyCodeObject *code_objects_96c202e57e864ead423de03d1d74f492;
static PyCodeObject *code_objects_c2986fafbda28663d470c4305594dd15;
static PyCodeObject *code_objects_f6d40523afa813a21e0e3697d1ba600a;
static PyCodeObject *code_objects_3d89babdc2a6b02fe3cd302c18a72596;
static PyCodeObject *code_objects_8c89fe117be336169075080eaed6d6ec;
static PyCodeObject *code_objects_3481a1cbf80d539ba6e3ece805ca23dd;
static PyCodeObject *code_objects_64c5e40540c5da5dd40c7bce469d541b;
static PyCodeObject *code_objects_52db5fa87173eaf45698775b4d10e958;
static PyCodeObject *code_objects_0a38e7f8259850b7fb9058d85c2d600c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[135]); CHECK_OBJECT(module_filename_obj);
    code_objects_435e7696c4330ccb8470be2c33c77785 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    code_objects_b2c20fe99ccde0ebdef921f1e53c8c20 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[137], NULL, 0, 0, 0);
    code_objects_7ca8d0c9c75a8789ecf461725c723a6a = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[138], NULL, 2, 0, 0);
    code_objects_96c202e57e864ead423de03d1d74f492 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[139], NULL, 1, 0, 0);
    code_objects_c2986fafbda28663d470c4305594dd15 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[138], NULL, 2, 0, 0);
    code_objects_f6d40523afa813a21e0e3697d1ba600a = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[140], NULL, 2, 0, 0);
    code_objects_3d89babdc2a6b02fe3cd302c18a72596 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[138], NULL, 2, 0, 0);
    code_objects_8c89fe117be336169075080eaed6d6ec = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[138], NULL, 2, 0, 0);
    code_objects_3481a1cbf80d539ba6e3ece805ca23dd = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[3], mod_consts[141], mod_consts[142], 2, 0, 0);
    code_objects_64c5e40540c5da5dd40c7bce469d541b = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[12], mod_consts[141], mod_consts[142], 2, 0, 0);
    code_objects_52db5fa87173eaf45698775b4d10e958 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[9], mod_consts[141], mod_consts[142], 2, 0, 0);
    code_objects_0a38e7f8259850b7fb9058d85c2d600c = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[20], mod_consts[143], mod_consts[142], 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = MAKE_FUNCTION_FRAME(tstate, code_objects_96c202e57e864ead423de03d1d74f492, module_numpy$lib$mixins, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 10;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame)) {
            frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc == cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);
        cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__2__binary_method;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(tstate, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_7ca8d0c9c75a8789ecf461725c723a6a, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__2__binary_method = cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__2__binary_method);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__2__binary_method) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_assattr_target_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[4];
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        frame_frame_numpy$lib$mixins$$$function__2__binary_method->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__2__binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__2__binary_method->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__2__binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__2__binary_method,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__2__binary_method == cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method);
        cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__2__binary_method);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_3481a1cbf80d539ba6e3ece805ca23dd, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = module_var_accessor_numpy$lib$mixins_$$__disables_array_ufunc(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 19;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[8]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);
        cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(tstate, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_3d89babdc2a6b02fe3cd302c18a72596, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_assattr_target_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[10];
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method == cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);
        cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_52db5fa87173eaf45698775b4d10e958, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = module_var_accessor_numpy$lib$mixins_$$__disables_array_ufunc(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame.f_lineno = 29;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[8]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);
        cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(tstate, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_c2986fafbda28663d470c4305594dd15, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_assattr_target_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[13];
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method == cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);
        cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_64c5e40540c5da5dd40c7bce469d541b, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[8]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 39;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
        frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_frame.f_lineno = 39;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);
        cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__5__numeric_methods;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = MAKE_FUNCTION_FRAME(tstate, code_objects_f6d40523afa813a21e0e3697d1ba600a, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ufunc);
        tmp_args_element_value_1 = par_ufunc;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = module_var_accessor_numpy$lib$mixins_$$__reflected_binary_method(tstate);
            if (unlikely(tmp_called_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 47;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_ufunc);
            tmp_args_element_value_3 = par_ufunc;
            CHECK_OBJECT(par_name);
            tmp_args_element_value_4 = par_name;
            frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            tmp_called_value_3 = module_var_accessor_numpy$lib$mixins_$$__inplace_binary_method(tstate);
            if (unlikely(tmp_called_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 48;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_ufunc);
            tmp_args_element_value_5 = par_ufunc;
            CHECK_OBJECT(par_name);
            tmp_args_element_value_6 = par_name;
            frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 48;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 48;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__5__numeric_methods, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__5__numeric_methods,
        type_description_1,
        par_ufunc,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__5__numeric_methods == cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);
        cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__6__unary_method;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(tstate, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_8c89fe117be336169075080eaed6d6ec, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__6__unary_method = cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__6__unary_method);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__6__unary_method) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_assattr_target_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[4];
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        frame_frame_numpy$lib$mixins$$$function__6__unary_method->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__6__unary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__6__unary_method->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__6__unary_method, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__6__unary_method,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__6__unary_method == cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method);
        cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__6__unary_method);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func)) {
        Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_0a38e7f8259850b7fb9058d85c2d600c, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_type_description == NULL);
    frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[8]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_frame.f_lineno = 54;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);
        cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = NULL;
    }

    assertFrameObject(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_96c202e57e864ead423de03d1d74f492,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7ca8d0c9c75a8789ecf461725c723a6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        code_objects_3481a1cbf80d539ba6e3ece805ca23dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d89babdc2a6b02fe3cd302c18a72596,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        code_objects_52db5fa87173eaf45698775b4d10e958,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c2986fafbda28663d470c4305594dd15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        code_objects_64c5e40540c5da5dd40c7bce469d541b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__5__numeric_methods,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f6d40523afa813a21e0e3697d1ba600a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c89fe117be336169075080eaed6d6ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        code_objects_0a38e7f8259850b7fb9058d85c2d600c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_numpy$lib$mixins[] = {
    impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
    impl_numpy$lib$mixins$$$function__2__binary_method,
    impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
    impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
    impl_numpy$lib$mixins$$$function__5__numeric_methods,
    impl_numpy$lib$mixins$$$function__6__unary_method,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_numpy$lib$mixins);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_numpy$lib$mixins,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_numpy$lib$mixins,
        sizeof(function_table_numpy$lib$mixins) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "numpy.lib.mixins";
#endif

// Internal entry point for module code.
PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$mixins");

    // Store the module for future use.
    module_numpy$lib$mixins = module;

    moduledict_numpy$lib$mixins = MODULE_DICT(module_numpy$lib$mixins);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$mixins: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$mixins: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$mixins: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib.mixins" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$mixins\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$mixins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[144]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$mixins);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$mixins);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_2);
    }
    frame_frame_numpy$lib$mixins = MAKE_MODULE_FRAME(code_objects_435e7696c4330ccb8470be2c33c77785, module_numpy$lib$mixins);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins);
    assert(Py_REFCNT(frame_frame_numpy$lib$mixins) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_numpy$lib$mixins_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_numpy$lib$mixins_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[26], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$mixins;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[29];
        tmp_level_value_1 = const_int_0;
        frame_frame_numpy$lib$mixins->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$mixins,
                mod_consts[30],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST1(tstate, mod_consts[32]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(tstate);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[36];
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[38];
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[23], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[32];
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[39], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2 = MAKE_CLASS_FRAME(tstate, code_objects_b2c20fe99ccde0ebdef921f1e53c8c20, module_numpy$lib$mixins, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2);
        assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_1 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            assert(!(tmp_called_value_1 == NULL));
            tmp_expression_value_1 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[40]);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = mod_consts[41];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_2 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_2 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[43]);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_4 = mod_consts[44];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 141;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_3 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_3 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[46]);
            if (tmp_args_element_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_6 = mod_consts[47];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 142;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_4 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_4 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[49]);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_8 = mod_consts[50];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_10;
            tmp_called_value_5 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_5 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[52]);
            if (tmp_args_element_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_10 = mod_consts[53];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_6 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_6 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[55]);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_12 = mod_consts[56];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_7 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_7 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_expression_value_7 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_7 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[58]);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_args_element_value_14 = mod_consts[58];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_args_element_value_13);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = tmp_assign_source_15;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
            if (tmp_assign_source_17 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[59], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[60], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[61], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_8 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_expression_value_8 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[62]);
            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_args_element_value_16 = mod_consts[63];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_args_element_value_15);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = tmp_assign_source_19;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
            if (tmp_assign_source_22 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 149;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[66], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_9 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_9 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_expression_value_9 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_9 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[67]);
            if (tmp_args_element_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_args_element_value_18 = mod_consts[68];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_args_element_value_17);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
            if (tmp_assign_source_26 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = tmp_assign_source_26;
        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 150;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[69], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_20;
            tmp_called_value_10 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_10 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_expression_value_10 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_10 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 152;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[72]);
            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 152;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_args_element_value_20 = mod_consts[72];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_args_element_value_19);
            if (tmp_iter_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 3);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 3);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 2, 3);
            if (tmp_assign_source_30 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_iterator_name_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 151;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_2;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[74], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_22;
            tmp_called_value_11 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_11 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_expression_value_11 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_11 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 155;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[76]);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 155;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_args_element_value_22 = mod_consts[77];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_args_element_value_21);
            if (tmp_iter_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = tmp_assign_source_31;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 3);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_14 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 3);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_15 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 2, 3);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_iterator_name_5;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_iterator_name_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_lineno_9 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_9 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_9:;
        goto try_end_10;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_2;
        // End of try:
        try_end_10:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[78], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[79], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[80], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_24;
            tmp_called_value_12 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_12 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_expression_value_12 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_12 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 157;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[81]);
            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 157;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_args_element_value_24 = mod_consts[82];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_args_element_value_23);
            if (tmp_iter_arg_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = tmp_assign_source_35;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_16 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 0, 3);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_17 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 1, 3);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_18 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 2, 3);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_iterator_name_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_lineno_11 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_11 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_14;
        // End of try:
        try_end_11:;
        goto try_end_12;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_lineno_12 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_12 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_2;
        // End of try:
        try_end_12:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[83], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[84], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[85], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_26;
            tmp_called_value_13 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_13 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_expression_value_13 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_13 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[86]);
            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_args_element_value_26 = mod_consts[87];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
                tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_args_element_value_25);
            if (tmp_iter_arg_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_assign_source_39 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = tmp_assign_source_39;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_19 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 0, 3);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_20 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 1, 3);
            if (tmp_assign_source_41 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_unpack_21;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_21 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 2, 3);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_iterator_name_7;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_iterator_name_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
        }
        goto try_end_13;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_lineno_13 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_13 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_16;
        // End of try:
        try_end_13:;
        goto try_end_14;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_lineno_14 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_14 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_2;
        // End of try:
        try_end_14:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[88], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[89], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[90], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;

        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_element_value_28;
            tmp_called_value_14 = module_var_accessor_numpy$lib$mixins_$$__binary_method(tstate);
            if (unlikely(tmp_called_value_14 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[16]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_14 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_14 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[91]);
            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_28 = mod_consts[91];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
            }

            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_30;
            tmp_called_value_15 = module_var_accessor_numpy$lib$mixins_$$__reflected_binary_method(tstate);
            if (unlikely(tmp_called_value_15 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_15 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_15 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[91]);
            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_30 = mod_consts[91];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 160;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
            }

            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_element_value_32;
            tmp_called_value_16 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_16 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_expression_value_16 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_16 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[94]);
            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_args_element_value_32 = mod_consts[95];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_args_element_value_31);
            if (tmp_iter_arg_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_22;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_22 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 0, 3);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_23 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 1, 3);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_24 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 2, 3);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_iterator_name_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_lineno_15 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_15 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_15:;
        goto try_end_16;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_lineno_16 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_16 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_2;
        // End of try:
        try_end_16:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[96], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[97], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[98], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_17 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_17 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_expression_value_17 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_17 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[99]);
            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_args_element_value_34 = mod_consts[100];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
            }

            Py_DECREF(tmp_args_element_value_33);
            if (tmp_iter_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
            Py_DECREF(tmp_iter_arg_9);
            if (tmp_assign_source_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = tmp_assign_source_47;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_unpack_25;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_25 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 0, 3);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_unpack_26;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_26 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_49 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 1, 3);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_unpack_27;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_27 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_50 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 2, 3);
            if (tmp_assign_source_50 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = tmp_assign_source_50;
        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_iterator_name_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_lineno_17 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_17 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_20;
        // End of try:
        try_end_17:;
        goto try_end_18;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_lineno_18 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_18 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_2;
        // End of try:
        try_end_18:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[101], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[102], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[103], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_element_value_36;
            tmp_called_value_18 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_18 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_expression_value_18 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_18 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 167;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[104]);
            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 167;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_args_element_value_36 = mod_consts[105];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
                tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
            }

            Py_DECREF(tmp_args_element_value_35);
            if (tmp_iter_arg_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = tmp_assign_source_51;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_unpack_28;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_28 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_52 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 0, 3);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_29;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_29 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_29, 1, 3);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = tmp_assign_source_53;
        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_30;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_30 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_30, 2, 3);
            if (tmp_assign_source_54 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = tmp_assign_source_54;
        }
        {
            PyObject *tmp_iterator_name_10;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_iterator_name_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_lineno_19 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_19 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_22;
        // End of try:
        try_end_19:;
        goto try_end_20;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_lineno_20 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_20 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_20;
        exception_lineno = exception_keeper_lineno_20;

        goto frame_exception_exit_2;
        // End of try:
        try_end_20:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[107], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_iter_arg_11;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_38;
            tmp_called_value_19 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_19 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_expression_value_19 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_19 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[109]);
            if (tmp_args_element_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_args_element_value_38 = mod_consts[110];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 168;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
            }

            Py_DECREF(tmp_args_element_value_37);
            if (tmp_iter_arg_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_assign_source_55 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            Py_DECREF(tmp_iter_arg_11);
            if (tmp_assign_source_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = tmp_assign_source_55;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_unpack_31;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_31 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_56 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_31, 0, 3);
            if (tmp_assign_source_56 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_unpack_32;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_32 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_32, 1, 3);
            if (tmp_assign_source_57 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = tmp_assign_source_57;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_unpack_33;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_33 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_58 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_33, 2, 3);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = tmp_assign_source_58;
        }
        {
            PyObject *tmp_iterator_name_11;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_iterator_name_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
        }
        goto try_end_21;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_lineno_21 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_21 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_24;
        // End of try:
        try_end_21:;
        goto try_end_22;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_lineno_22 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_22 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_2;
        // End of try:
        try_end_22:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[111], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[112], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[113], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_iter_arg_12;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_40;
            tmp_called_value_20 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_20 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_expression_value_20 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_20 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[114]);
            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_args_element_value_40 = mod_consts[115];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
                tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
            }

            Py_DECREF(tmp_args_element_value_39);
            if (tmp_iter_arg_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
            Py_DECREF(tmp_iter_arg_12);
            if (tmp_assign_source_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = tmp_assign_source_59;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_34;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_34 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_34, 0, 3);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_35;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_35 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_35, 1, 3);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_unpack_36;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_36 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_36, 2, 3);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = tmp_assign_source_62;
        }
        {
            PyObject *tmp_iterator_name_12;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_iterator_name_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_27;
            }
        }
        goto try_end_23;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_lineno_23 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_23 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_26;
        // End of try:
        try_end_23:;
        goto try_end_24;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_lineno_24 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_24 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_24;
        exception_lineno = exception_keeper_lineno_24;

        goto frame_exception_exit_2;
        // End of try:
        try_end_24:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[116], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[118], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_iter_arg_13;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_42;
            tmp_called_value_21 = module_var_accessor_numpy$lib$mixins_$$__numeric_methods(tstate);
            if (unlikely(tmp_called_value_21 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_expression_value_21 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_21 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[119]);
            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_args_element_value_42 = mod_consts[120];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
            }

            Py_DECREF(tmp_args_element_value_41);
            if (tmp_iter_arg_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_assign_source_63 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
            Py_DECREF(tmp_iter_arg_13);
            if (tmp_assign_source_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = tmp_assign_source_63;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_unpack_37;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_37 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_64 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_37, 0, 3);
            if (tmp_assign_source_64 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = tmp_assign_source_64;
        }
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_unpack_38;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_38 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_38, 1, 3);
            if (tmp_assign_source_65 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = tmp_assign_source_65;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_unpack_39;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_39 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_39, 2, 3);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = tmp_assign_source_66;
        }
        {
            PyObject *tmp_iterator_name_13;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_iterator_name_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_13, 3);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
        }
        goto try_end_25;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_lineno_25 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_25 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_28;
        // End of try:
        try_end_25:;
        goto try_end_26;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_lineno_26 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_26 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_26;
        exception_lineno = exception_keeper_lineno_26;

        goto frame_exception_exit_2;
        // End of try:
        try_end_26:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[121], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[122], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3;
        tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[123], tmp_dictset_value);
        assert(!(tmp_result == false));
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;

        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_44;
            tmp_called_value_22 = module_var_accessor_numpy$lib$mixins_$$__unary_method(tstate);
            if (unlikely(tmp_called_value_22 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_22 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_22 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[124]);
            if (tmp_args_element_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_44 = mod_consts[125];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_46;
            tmp_called_value_23 = module_var_accessor_numpy$lib$mixins_$$__unary_method(tstate);
            if (unlikely(tmp_called_value_23 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_23 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_23 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[127]);
            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_46 = mod_consts[128];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_48;
            tmp_called_value_24 = module_var_accessor_numpy$lib$mixins_$$__unary_method(tstate);
            if (unlikely(tmp_called_value_24 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_24 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_24 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[130]);
            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_48 = mod_consts[131];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
            }

            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_50;
            tmp_called_value_25 = module_var_accessor_numpy$lib$mixins_$$__unary_method(tstate);
            if (unlikely(tmp_called_value_25 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[35]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_25 = module_var_accessor_numpy$lib$mixins_$$_um(tstate);
            if (unlikely(tmp_expression_value_25 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[133]);
            if (tmp_args_element_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_50 = mod_consts[133];
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
            }

            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_26 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[32];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_numpy$lib$mixins->m_frame.f_lineno = 59;
            tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 59;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59);
        locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_27 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_27 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59);
        locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_59 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_28 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_28 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 59;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_14);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_29 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_29 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_numpy$lib$mixins);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$mixins", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib.mixins" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$mixins);
    return module_numpy$lib$mixins;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$mixins", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
