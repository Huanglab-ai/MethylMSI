/* Generated code for Python module 'sklearn$metrics'
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

/* The "module_sklearn$metrics" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sklearn$metrics;
PyDictObject *moduledict_sklearn$metrics;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[192];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("sklearn.metrics"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 192; i++) {
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
void checkModuleConstants_sklearn$metrics(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 192; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_sklearn$metrics_$$___path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[11]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[11]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[11]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[11]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$metrics_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$metrics->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$metrics->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[191]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$metrics->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[191])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[191], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[191])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[191], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[191]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[191]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[191]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1c646fb9701ef6919b78df6e17a3f4ea;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[189]); CHECK_OBJECT(module_filename_obj);
    code_objects_1c646fb9701ef6919b78df6e17a3f4ea = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[190], mod_consts[190], NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_sklearn$metrics[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_sklearn$metrics);

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
        module_sklearn$metrics,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_sklearn$metrics,
        sizeof(function_table_sklearn$metrics) / sizeof(function_impl_code)
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
static char const *module_full_name = "sklearn.metrics";
#endif

// Internal entry point for module code.
PyObject *modulecode_sklearn$metrics(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sklearn$metrics");

    // Store the module for future use.
    module_sklearn$metrics = module;

    moduledict_sklearn$metrics = MODULE_DICT(module_sklearn$metrics);

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
        PRINT_STRING("sklearn$metrics: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn$metrics: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sklearn$metrics: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.metrics" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initsklearn$metrics\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sklearn$metrics,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sklearn$metrics,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[81]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sklearn$metrics,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$metrics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$metrics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sklearn$metrics);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sklearn$metrics);
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

        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_frame_sklearn$metrics;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_frame_sklearn$metrics = MAKE_MODULE_FRAME(code_objects_1c646fb9701ef6919b78df6e17a3f4ea, module_sklearn$metrics);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$metrics);
    assert(Py_REFCNT(frame_frame_sklearn$metrics) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[3]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[3]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[6]);


                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts[8]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[9];
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[6]);


                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_frame_sklearn$metrics->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts[10]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_sklearn$metrics_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_sklearn$metrics_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = module_var_accessor_sklearn$metrics_$$___path__(tstate);
        if (unlikely(tmp_assattr_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = module_var_accessor_sklearn$metrics_$$___spec__(tstate);
        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[14], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[16];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[17];
        tmp_level_value_1 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[18],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[16];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[19];
        tmp_level_value_2 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[20],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[16];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[21];
        tmp_level_value_3 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 9;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[22],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[16];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[23];
        tmp_level_value_4 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[24],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[16];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[25];
        tmp_level_value_5 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[26],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[16];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[27];
        tmp_level_value_6 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 12;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[28],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[16];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[29];
        tmp_level_value_7 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 13;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[30],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[16];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[31];
        tmp_level_value_8 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 14;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[32],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[16];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[33];
        tmp_level_value_9 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 15;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[34],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[16];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[35];
        tmp_level_value_10 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 16;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[36],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[16];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[37];
        tmp_level_value_11 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 17;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[38],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[16];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[39];
        tmp_level_value_12 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 18;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[40],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[41];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[42];
        tmp_level_value_13 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 20;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[43],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[41];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[44];
        tmp_level_value_14 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 21;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[45],
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[41];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[46];
        tmp_level_value_15 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 22;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[47],
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[41];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[48];
        tmp_level_value_16 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 23;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[49],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[41];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[50];
        tmp_level_value_17 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 24;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[51],
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[41];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[52];
        tmp_level_value_18 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 25;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[53],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[41];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[54];
        tmp_level_value_19 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 26;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[55],
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[41];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[56];
        tmp_level_value_20 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 27;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[57],
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[41];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[58];
        tmp_level_value_21 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 28;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[59],
                const_int_0
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[41];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[60];
        tmp_level_value_22 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 29;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[61],
                const_int_0
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[41];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[62];
        tmp_level_value_23 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 30;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[63],
                const_int_0
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[41];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[64];
        tmp_level_value_24 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 31;
        tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[65],
                const_int_0
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[41];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[66];
        tmp_level_value_25 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 32;
        tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[67],
                const_int_0
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[41];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[68];
        tmp_level_value_26 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 33;
        tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[69],
                const_int_0
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[41];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[70];
        tmp_level_value_27 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 34;
        tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[71],
                const_int_0
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[41];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[72];
        tmp_level_value_28 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 35;
        tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[73],
                const_int_0
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[41];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[74];
        tmp_level_value_29 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 36;
        tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[75],
                const_int_0
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[41];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[76];
        tmp_level_value_30 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 37;
        tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[77],
                const_int_0
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[78];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[79];
        tmp_level_value_31 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 39;
        tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[80],
                const_int_0
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[81];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[82];
        tmp_level_value_32 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 41;
        tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_import_name_from_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[83],
                const_int_0
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[83];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[84];
        tmp_level_value_33 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 42;
        tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[85],
                const_int_0
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[83];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[86];
        tmp_level_value_34 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 43;
        tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[87],
                const_int_0
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[83];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[88];
        tmp_level_value_35 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 44;
        tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_import_name_from_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[89],
                const_int_0
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[83];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[90];
        tmp_level_value_36 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 45;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[91],
                const_int_0
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[83];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[92];
        tmp_level_value_37 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 46;
        tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[93],
                const_int_0
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[83];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[94];
        tmp_level_value_38 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 47;
        tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[95],
                const_int_0
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[83];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[96];
        tmp_level_value_39 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 48;
        tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_39,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[97],
                const_int_0
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[83];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[98];
        tmp_level_value_40 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 49;
        tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_40,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[99],
                const_int_0
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[83];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[100];
        tmp_level_value_41 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 50;
        tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_41,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[101],
                const_int_0
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[83];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[102];
        tmp_level_value_42 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 51;
        tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_42,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[103],
                const_int_0
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[83];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[104];
        tmp_level_value_43 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 52;
        tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_43,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[105],
                const_int_0
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[83];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[106];
        tmp_level_value_44 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 53;
        tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_44,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[107],
                const_int_0
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[83];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[108];
        tmp_level_value_45 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 54;
        tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_45,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[109],
                const_int_0
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[83];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[110];
        tmp_level_value_46 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 55;
        tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_46,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[111],
                const_int_0
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[83];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[112];
        tmp_level_value_47 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 56;
        tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_import_name_from_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_47,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[113],
                const_int_0
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[83];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[114];
        tmp_level_value_48 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 57;
        tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_import_name_from_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_48,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[115],
                const_int_0
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[116];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[117];
        tmp_level_value_49 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 59;
        tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_49,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[118],
                const_int_0
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[116];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[119];
        tmp_level_value_50 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 60;
        tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_50,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[120],
                const_int_0
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[120]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[116];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[121];
        tmp_level_value_51 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 61;
        tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_51,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[122],
                const_int_0
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[116];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[123];
        tmp_level_value_52 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 62;
        tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_52,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[124],
                const_int_0
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[116];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[125];
        tmp_level_value_53 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 63;
        tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_53,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[126],
                const_int_0
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[126]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_value_54;
        PyObject *tmp_globals_arg_value_54;
        PyObject *tmp_locals_arg_value_54;
        PyObject *tmp_fromlist_value_54;
        PyObject *tmp_level_value_54;
        tmp_name_value_54 = mod_consts[116];
        tmp_globals_arg_value_54 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_54 = Py_None;
        tmp_fromlist_value_54 = mod_consts[127];
        tmp_level_value_54 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 64;
        tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
        if (tmp_import_name_from_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_54,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[128],
                const_int_0
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_value_55;
        PyObject *tmp_globals_arg_value_55;
        PyObject *tmp_locals_arg_value_55;
        PyObject *tmp_fromlist_value_55;
        PyObject *tmp_level_value_55;
        tmp_name_value_55 = mod_consts[116];
        tmp_globals_arg_value_55 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_55 = Py_None;
        tmp_fromlist_value_55 = mod_consts[129];
        tmp_level_value_55 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 65;
        tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
        if (tmp_import_name_from_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_55,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[130],
                const_int_0
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[130]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_value_56;
        PyObject *tmp_globals_arg_value_56;
        PyObject *tmp_locals_arg_value_56;
        PyObject *tmp_fromlist_value_56;
        PyObject *tmp_level_value_56;
        tmp_name_value_56 = mod_consts[131];
        tmp_globals_arg_value_56 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_56 = Py_None;
        tmp_fromlist_value_56 = mod_consts[132];
        tmp_level_value_56 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 67;
        tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
        if (tmp_import_name_from_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_56,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[133],
                const_int_0
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_57;
        PyObject *tmp_globals_arg_value_57;
        PyObject *tmp_locals_arg_value_57;
        PyObject *tmp_fromlist_value_57;
        PyObject *tmp_level_value_57;
        tmp_name_value_57 = mod_consts[131];
        tmp_globals_arg_value_57 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_57 = Py_None;
        tmp_fromlist_value_57 = mod_consts[134];
        tmp_level_value_57 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 68;
        tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
        if (tmp_import_name_from_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_57,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[135],
                const_int_0
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_58;
        PyObject *tmp_globals_arg_value_58;
        PyObject *tmp_locals_arg_value_58;
        PyObject *tmp_fromlist_value_58;
        PyObject *tmp_level_value_58;
        tmp_name_value_58 = mod_consts[131];
        tmp_globals_arg_value_58 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_58 = Py_None;
        tmp_fromlist_value_58 = mod_consts[136];
        tmp_level_value_58 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 69;
        tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
        if (tmp_import_name_from_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_58,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[137],
                const_int_0
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_value_59;
        PyObject *tmp_globals_arg_value_59;
        PyObject *tmp_locals_arg_value_59;
        PyObject *tmp_fromlist_value_59;
        PyObject *tmp_level_value_59;
        tmp_name_value_59 = mod_consts[131];
        tmp_globals_arg_value_59 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_59 = Py_None;
        tmp_fromlist_value_59 = mod_consts[138];
        tmp_level_value_59 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 70;
        tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
        if (tmp_import_name_from_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_59,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[139],
                const_int_0
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_value_60;
        PyObject *tmp_globals_arg_value_60;
        PyObject *tmp_locals_arg_value_60;
        PyObject *tmp_fromlist_value_60;
        PyObject *tmp_level_value_60;
        tmp_name_value_60 = mod_consts[131];
        tmp_globals_arg_value_60 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_60 = Py_None;
        tmp_fromlist_value_60 = mod_consts[140];
        tmp_level_value_60 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 71;
        tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
        if (tmp_import_name_from_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_60,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[141],
                const_int_0
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_value_61;
        PyObject *tmp_globals_arg_value_61;
        PyObject *tmp_locals_arg_value_61;
        PyObject *tmp_fromlist_value_61;
        PyObject *tmp_level_value_61;
        tmp_name_value_61 = mod_consts[131];
        tmp_globals_arg_value_61 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_61 = Py_None;
        tmp_fromlist_value_61 = mod_consts[142];
        tmp_level_value_61 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 72;
        tmp_import_name_from_61 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
        if (tmp_import_name_from_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_61,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[143],
                const_int_0
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_value_62;
        PyObject *tmp_globals_arg_value_62;
        PyObject *tmp_locals_arg_value_62;
        PyObject *tmp_fromlist_value_62;
        PyObject *tmp_level_value_62;
        tmp_name_value_62 = mod_consts[131];
        tmp_globals_arg_value_62 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_62 = Py_None;
        tmp_fromlist_value_62 = mod_consts[144];
        tmp_level_value_62 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 73;
        tmp_import_name_from_62 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
        if (tmp_import_name_from_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_62,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[145],
                const_int_0
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_value_63;
        PyObject *tmp_globals_arg_value_63;
        PyObject *tmp_locals_arg_value_63;
        PyObject *tmp_fromlist_value_63;
        PyObject *tmp_level_value_63;
        tmp_name_value_63 = mod_consts[131];
        tmp_globals_arg_value_63 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_63 = Py_None;
        tmp_fromlist_value_63 = mod_consts[146];
        tmp_level_value_63 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 74;
        tmp_import_name_from_63 = IMPORT_MODULE5(tstate, tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
        if (tmp_import_name_from_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_63,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[147],
                const_int_0
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_value_64;
        PyObject *tmp_globals_arg_value_64;
        PyObject *tmp_locals_arg_value_64;
        PyObject *tmp_fromlist_value_64;
        PyObject *tmp_level_value_64;
        tmp_name_value_64 = mod_consts[131];
        tmp_globals_arg_value_64 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_64 = Py_None;
        tmp_fromlist_value_64 = mod_consts[148];
        tmp_level_value_64 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 75;
        tmp_import_name_from_64 = IMPORT_MODULE5(tstate, tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
        if (tmp_import_name_from_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_64,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[149],
                const_int_0
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_value_65;
        PyObject *tmp_globals_arg_value_65;
        PyObject *tmp_locals_arg_value_65;
        PyObject *tmp_fromlist_value_65;
        PyObject *tmp_level_value_65;
        tmp_name_value_65 = mod_consts[131];
        tmp_globals_arg_value_65 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_65 = Py_None;
        tmp_fromlist_value_65 = mod_consts[150];
        tmp_level_value_65 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 76;
        tmp_import_name_from_65 = IMPORT_MODULE5(tstate, tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
        if (tmp_import_name_from_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_65,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[151],
                const_int_0
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_value_66;
        PyObject *tmp_globals_arg_value_66;
        PyObject *tmp_locals_arg_value_66;
        PyObject *tmp_fromlist_value_66;
        PyObject *tmp_level_value_66;
        tmp_name_value_66 = mod_consts[131];
        tmp_globals_arg_value_66 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_66 = Py_None;
        tmp_fromlist_value_66 = mod_consts[152];
        tmp_level_value_66 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 77;
        tmp_import_name_from_66 = IMPORT_MODULE5(tstate, tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
        if (tmp_import_name_from_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_66,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[153],
                const_int_0
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[153]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_67;
        PyObject *tmp_name_value_67;
        PyObject *tmp_globals_arg_value_67;
        PyObject *tmp_locals_arg_value_67;
        PyObject *tmp_fromlist_value_67;
        PyObject *tmp_level_value_67;
        tmp_name_value_67 = mod_consts[131];
        tmp_globals_arg_value_67 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_67 = Py_None;
        tmp_fromlist_value_67 = mod_consts[154];
        tmp_level_value_67 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 78;
        tmp_import_name_from_67 = IMPORT_MODULE5(tstate, tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
        if (tmp_import_name_from_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_67,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[155],
                const_int_0
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_67);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_68;
        PyObject *tmp_name_value_68;
        PyObject *tmp_globals_arg_value_68;
        PyObject *tmp_locals_arg_value_68;
        PyObject *tmp_fromlist_value_68;
        PyObject *tmp_level_value_68;
        tmp_name_value_68 = mod_consts[131];
        tmp_globals_arg_value_68 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_68 = Py_None;
        tmp_fromlist_value_68 = mod_consts[156];
        tmp_level_value_68 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 79;
        tmp_import_name_from_68 = IMPORT_MODULE5(tstate, tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
        if (tmp_import_name_from_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_68,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[157],
                const_int_0
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_68);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_69;
        PyObject *tmp_name_value_69;
        PyObject *tmp_globals_arg_value_69;
        PyObject *tmp_locals_arg_value_69;
        PyObject *tmp_fromlist_value_69;
        PyObject *tmp_level_value_69;
        tmp_name_value_69 = mod_consts[158];
        tmp_globals_arg_value_69 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_69 = Py_None;
        tmp_fromlist_value_69 = mod_consts[159];
        tmp_level_value_69 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 82;
        tmp_import_name_from_69 = IMPORT_MODULE5(tstate, tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
        if (tmp_import_name_from_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_69,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[160],
                const_int_0
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_69);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_70;
        PyObject *tmp_name_value_70;
        PyObject *tmp_globals_arg_value_70;
        PyObject *tmp_locals_arg_value_70;
        PyObject *tmp_fromlist_value_70;
        PyObject *tmp_level_value_70;
        tmp_name_value_70 = mod_consts[158];
        tmp_globals_arg_value_70 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_70 = Py_None;
        tmp_fromlist_value_70 = mod_consts[161];
        tmp_level_value_70 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 83;
        tmp_import_name_from_70 = IMPORT_MODULE5(tstate, tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
        if (tmp_import_name_from_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_70,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[162],
                const_int_0
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_70);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_71;
        PyObject *tmp_name_value_71;
        PyObject *tmp_globals_arg_value_71;
        PyObject *tmp_locals_arg_value_71;
        PyObject *tmp_fromlist_value_71;
        PyObject *tmp_level_value_71;
        tmp_name_value_71 = mod_consts[158];
        tmp_globals_arg_value_71 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_71 = Py_None;
        tmp_fromlist_value_71 = mod_consts[163];
        tmp_level_value_71 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 84;
        tmp_import_name_from_71 = IMPORT_MODULE5(tstate, tmp_name_value_71, tmp_globals_arg_value_71, tmp_locals_arg_value_71, tmp_fromlist_value_71, tmp_level_value_71);
        if (tmp_import_name_from_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_71,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[164],
                const_int_0
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[164]);
        }

        Py_DECREF(tmp_import_name_from_71);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_72;
        PyObject *tmp_name_value_72;
        PyObject *tmp_globals_arg_value_72;
        PyObject *tmp_locals_arg_value_72;
        PyObject *tmp_fromlist_value_72;
        PyObject *tmp_level_value_72;
        tmp_name_value_72 = mod_consts[158];
        tmp_globals_arg_value_72 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_72 = Py_None;
        tmp_fromlist_value_72 = mod_consts[165];
        tmp_level_value_72 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 85;
        tmp_import_name_from_72 = IMPORT_MODULE5(tstate, tmp_name_value_72, tmp_globals_arg_value_72, tmp_locals_arg_value_72, tmp_fromlist_value_72, tmp_level_value_72);
        if (tmp_import_name_from_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_72,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[166],
                const_int_0
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_72);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_73;
        PyObject *tmp_name_value_73;
        PyObject *tmp_globals_arg_value_73;
        PyObject *tmp_locals_arg_value_73;
        PyObject *tmp_fromlist_value_73;
        PyObject *tmp_level_value_73;
        tmp_name_value_73 = mod_consts[167];
        tmp_globals_arg_value_73 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_73 = Py_None;
        tmp_fromlist_value_73 = mod_consts[168];
        tmp_level_value_73 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 87;
        tmp_import_name_from_73 = IMPORT_MODULE5(tstate, tmp_name_value_73, tmp_globals_arg_value_73, tmp_locals_arg_value_73, tmp_fromlist_value_73, tmp_level_value_73);
        if (tmp_import_name_from_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_73,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[169],
                const_int_0
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_73);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_value_74;
        PyObject *tmp_globals_arg_value_74;
        PyObject *tmp_locals_arg_value_74;
        PyObject *tmp_fromlist_value_74;
        PyObject *tmp_level_value_74;
        tmp_name_value_74 = mod_consts[167];
        tmp_globals_arg_value_74 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_74 = Py_None;
        tmp_fromlist_value_74 = mod_consts[170];
        tmp_level_value_74 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 88;
        tmp_import_name_from_74 = IMPORT_MODULE5(tstate, tmp_name_value_74, tmp_globals_arg_value_74, tmp_locals_arg_value_74, tmp_fromlist_value_74, tmp_level_value_74);
        if (tmp_import_name_from_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_74,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[171],
                const_int_0
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[171]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_75;
        PyObject *tmp_name_value_75;
        PyObject *tmp_globals_arg_value_75;
        PyObject *tmp_locals_arg_value_75;
        PyObject *tmp_fromlist_value_75;
        PyObject *tmp_level_value_75;
        tmp_name_value_75 = mod_consts[172];
        tmp_globals_arg_value_75 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_75 = Py_None;
        tmp_fromlist_value_75 = mod_consts[173];
        tmp_level_value_75 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 89;
        tmp_import_name_from_75 = IMPORT_MODULE5(tstate, tmp_name_value_75, tmp_globals_arg_value_75, tmp_locals_arg_value_75, tmp_fromlist_value_75, tmp_level_value_75);
        if (tmp_import_name_from_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_75,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[174],
                const_int_0
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[174]);
        }

        Py_DECREF(tmp_import_name_from_75);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_76;
        PyObject *tmp_name_value_76;
        PyObject *tmp_globals_arg_value_76;
        PyObject *tmp_locals_arg_value_76;
        PyObject *tmp_fromlist_value_76;
        PyObject *tmp_level_value_76;
        tmp_name_value_76 = mod_consts[172];
        tmp_globals_arg_value_76 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_76 = Py_None;
        tmp_fromlist_value_76 = mod_consts[175];
        tmp_level_value_76 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 90;
        tmp_import_name_from_76 = IMPORT_MODULE5(tstate, tmp_name_value_76, tmp_globals_arg_value_76, tmp_locals_arg_value_76, tmp_fromlist_value_76, tmp_level_value_76);
        if (tmp_import_name_from_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_76,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[176],
                const_int_0
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[176]);
        }

        Py_DECREF(tmp_import_name_from_76);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_77;
        PyObject *tmp_name_value_77;
        PyObject *tmp_globals_arg_value_77;
        PyObject *tmp_locals_arg_value_77;
        PyObject *tmp_fromlist_value_77;
        PyObject *tmp_level_value_77;
        tmp_name_value_77 = mod_consts[177];
        tmp_globals_arg_value_77 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_77 = Py_None;
        tmp_fromlist_value_77 = mod_consts[178];
        tmp_level_value_77 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 91;
        tmp_import_name_from_77 = IMPORT_MODULE5(tstate, tmp_name_value_77, tmp_globals_arg_value_77, tmp_locals_arg_value_77, tmp_fromlist_value_77, tmp_level_value_77);
        if (tmp_import_name_from_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_77,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[179],
                const_int_0
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[179]);
        }

        Py_DECREF(tmp_import_name_from_77);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_78;
        PyObject *tmp_name_value_78;
        PyObject *tmp_globals_arg_value_78;
        PyObject *tmp_locals_arg_value_78;
        PyObject *tmp_fromlist_value_78;
        PyObject *tmp_level_value_78;
        tmp_name_value_78 = mod_consts[177];
        tmp_globals_arg_value_78 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_78 = Py_None;
        tmp_fromlist_value_78 = mod_consts[180];
        tmp_level_value_78 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 92;
        tmp_import_name_from_78 = IMPORT_MODULE5(tstate, tmp_name_value_78, tmp_globals_arg_value_78, tmp_locals_arg_value_78, tmp_fromlist_value_78, tmp_level_value_78);
        if (tmp_import_name_from_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_78,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[181],
                const_int_0
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[181]);
        }

        Py_DECREF(tmp_import_name_from_78);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_79;
        PyObject *tmp_name_value_79;
        PyObject *tmp_globals_arg_value_79;
        PyObject *tmp_locals_arg_value_79;
        PyObject *tmp_fromlist_value_79;
        PyObject *tmp_level_value_79;
        tmp_name_value_79 = mod_consts[182];
        tmp_globals_arg_value_79 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_79 = Py_None;
        tmp_fromlist_value_79 = mod_consts[183];
        tmp_level_value_79 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 94;
        tmp_import_name_from_79 = IMPORT_MODULE5(tstate, tmp_name_value_79, tmp_globals_arg_value_79, tmp_locals_arg_value_79, tmp_fromlist_value_79, tmp_level_value_79);
        if (tmp_import_name_from_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_79,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[184],
                const_int_0
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[184]);
        }

        Py_DECREF(tmp_import_name_from_79);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_80;
        PyObject *tmp_name_value_80;
        PyObject *tmp_globals_arg_value_80;
        PyObject *tmp_locals_arg_value_80;
        PyObject *tmp_fromlist_value_80;
        PyObject *tmp_level_value_80;
        tmp_name_value_80 = mod_consts[182];
        tmp_globals_arg_value_80 = (PyObject *)moduledict_sklearn$metrics;
        tmp_locals_arg_value_80 = Py_None;
        tmp_fromlist_value_80 = mod_consts[185];
        tmp_level_value_80 = const_int_pos_1;
        frame_frame_sklearn$metrics->m_frame.f_lineno = 95;
        tmp_import_name_from_80 = IMPORT_MODULE5(tstate, tmp_name_value_80, tmp_globals_arg_value_80, tmp_locals_arg_value_80, tmp_fromlist_value_80, tmp_level_value_80);
        if (tmp_import_name_from_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_80,
                (PyObject *)moduledict_sklearn$metrics,
                mod_consts[186],
                const_int_0
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[186]);
        }

        Py_DECREF(tmp_import_name_from_80);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_84);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$metrics, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$metrics->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$metrics, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_sklearn$metrics);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = LIST_COPY(tstate, mod_consts[187]);
        UPDATE_STRING_DICT1(moduledict_sklearn$metrics, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_85);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sklearn$metrics", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.metrics" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_sklearn$metrics);
    return module_sklearn$metrics;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$metrics, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sklearn$metrics", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
